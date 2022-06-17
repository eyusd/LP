# @author Simon Stepputtis <sstepput@asu.edu>, Interactive Robotics Lab, Arizona State University

import tensorflow as tf
import pathlib
from model_src.attention import TopDownAttention
from model_src.glove import GloveEmbeddings
from model_src.dmp import DynamicMovementPrimitive
from model_src.basismodel import BasisModel

# tf.debugging.enable_check_numerics

class PolicyTranslationModel(tf.keras.Model):
    def __init__(self, od_path, glove_path, special=None):
        super(PolicyTranslationModel, self).__init__(name="policy_translation")
        self.units               = 32
        self.output_dims         = 7
        self.basis_functions     = 11

        if od_path != "":                
            od_path    = pathlib.Path(od_path)/"saved_model" 
            self.frcnn = tf.saved_model.load(str(od_path))
            self.frcnn = self.frcnn.signatures['serving_default']
            self.frcnn.trainable = False

        self.embedding = GloveEmbeddings(file_path=glove_path)
        self.lng_gru   = tf.keras.layers.GRU(units=self.units)

        self.attention = TopDownAttention(units=64)

        self.dout      = tf.keras.layers.Dropout(rate=0.25)

        # Units needs to be divisible by 7
        self.pt_global = tf.keras.layers.Dense(units=42, activation=tf.keras.activations.relu)

        self.pt_dt_1   = tf.keras.layers.Dense(units=self.units * 2, activation=tf.keras.activations.relu)
        self.pt_dt_2   = tf.keras.layers.Dense(units=1, activation=tf.keras.activations.hard_sigmoid)

        self.robot_gru      = tf.keras.layers.GRUCell(units=self.units)     #input : batch size / timestep / features
        #self.attention_gru  = tf.keras.layers.GRUCell(units=self.units)

        self.weight_dense_1 = tf.keras.layers.Dense(units=self.output_dims * self.basis_functions, activation=tf.keras.activations.relu)
        self.weight_dense_2 = tf.keras.layers.Dense(units=self.output_dims * self.basis_functions, activation=tf.keras.activations.relu)
        self.weight_dense_3 = tf.keras.layers.Dense(units=self.output_dims * self.basis_functions, activation=tf.keras.activations.linear)

        self.phase_dense_1 = tf.keras.layers.Dense(units=int(self.units / 2.0), activation=tf.keras.activations.relu)
        self.phase_dense_2 = tf.keras.layers.Dense(units=1, activation=tf.keras.activations.hard_sigmoid)

        self.basismodel = BasisModel(dimensions=self.output_dims, nfunctions=self.basis_functions, scale=0.012)
           
    @tf.function
    def call(self, inputs, states, training=False, use_dropout=True):
        # def call(self, inputs, training=False, use_dropout=True):
        if training:
            use_dropout = True

        language   = inputs[0] # at timestep t
        features   = inputs[1] #
        robot      = inputs[2] # if in training

        language  = self.embedding(language)
        language  = self.lng_gru(inputs=language, training=training) 

        # Calculate attention and expand it to match the feature size
        atn = self.attention((language, features))
        atn_w = tf.expand_dims(atn, 2)
        atn_w = tf.tile(atn_w, [1, 1, 5])
        # Compress image features and apply attention
        cfeatures = tf.math.multiply(atn_w, features)
        cfeatures = tf.math.reduce_sum(cfeatures, axis=1)

        # Add the language to the mix again. Possibly usefull to predict dt
        #start_joints  = robot[:,0,:]
        cfeatures = tf.keras.backend.concatenate((cfeatures, language), axis=1) #start_joints), axis=1) -> removed

        # Policy Translation: Create weight + goal for DMP
        pt          = self.pt_global(cfeatures)
        # print("pt:", pt)
        pt          = self.dout(pt, training=tf.convert_to_tensor(use_dropout))
        # tf.add(pt, 1e-4)
        # print("pt:", pt)
        dmp_dt      = self.pt_dt_2(self.pt_dt_1(pt)) + 0.1
        # print("dmp_dt:", dmp_dt)

        # print()


        ###Controller
        st_robot_last  = states[0]
        st_robot_gru_last    = states[1]
        
        # Robot GRU:
        in_robot           = tf.cond(tf.convert_to_tensor(training), lambda: st_robot_last, lambda: robot)
        e_robot, robot_gru_state = self.robot_gru(inputs=in_robot, states=[st_robot_gru_last])

        # Internal state:
        x = tf.keras.backend.concatenate((cfeatures, e_robot, st_robot_last), axis=1)

        # Use x to calcate the weights:
        weights = self.weight_dense_3(self.weight_dense_2(self.weight_dense_1(x)))
        weights = tf.keras.backend.reshape(weights, shape=[-1, self.output_dims, self.basis_functions])

        # Phase estimation, based on x:
        dt    = 1.0 / (500.0 * dmp_dt) # Calculates the actual dt
        phase = self.phase_dense_2(self.phase_dense_1(x))
        phase = phase + dt

        # Apply basis model:
        action, _ = self.basismodel((weights, tf.zeros_like(weights), phase))
        action = tf.squeeze(action)

        # Rebuild the state:
        new_states = (action, robot_gru_state[0])

        # print("dmp_dt in newmodel:", dmp_dt)

        return (action, phase, weights, atn, dmp_dt), new_states
        
        #generated, phase, weights = self.controller(inputs=robot, constants=(cfeatures, dmp_dt), initial_state=initial_state, training=training)
        #return generated, (atn, dmp_dt, phase, weights)

        #Add atn & dmp_dt to aggregator
    
    def getVariables(self, step=None):
        return self.trainable_variables
    
    def getVariablesFT(self):
        variables = []
        variables += self.pt_w_1.trainable_variables
        variables += self.pt_w_2.trainable_variables
        variables += self.pt_w_3.trainable_variables
        return variables
    
    def saveModelToFile(self, add):
        self.save_weights("Data/Model/" + add + "policy_translation")