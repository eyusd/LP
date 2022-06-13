# @author Simon Stepputtis <sstepput@asu.edu>, Interactive Robotics Lab, Arizona State University

import tensorflow as tf
from model_src.basismodel import BasisModel

class FeedbackController(tf.keras.layers.Layer):
    def __init__(self, robot_state_size, rnn_state_size, dimensions, basis_functions, special, **kwargs):
        super(FeedbackController, self).__init__(**kwargs)
        self.robot_state_size = robot_state_size
        self.state_size       = rnn_state_size
        self.dims             = dimensions
        self.n_bfuncs         = basis_functions
        self.od_path          = special["od_path"]
        self.glove_path       = special["glove_path"]
        self.units            = special["units"]

    def build(self, input_shape):
        if self.od_path != "":                
            od_path    = pathlib.Path(self.od_path)/"saved_model" 
            self.yolo = tf.saved_model.load(str(od_path))
            self.yolo = self.yolo.signatures['serving_default']
            self.yolo.trainable = False

        self.embedding = GloveEmbeddings(file_path=self.glove_path)
        self.lng_gru   = tf.keras.layers.GRU(units=self.units)

        self.attention = TopDownAttention(units=64)

        self.dout      = tf.keras.layers.Dropout(rate=0.25)

        # Units needs to be divisible by 7
        self.pt_global = tf.keras.layers.Dense(units=42, activation=tf.keras.activations.relu)

        self.pt_dt_1   = tf.keras.layers.Dense(units=self.units * 2, activation=tf.keras.activations.relu)
        self.pt_dt_2   = tf.keras.layers.Dense(units=1, activation=tf.keras.activations.hard_sigmoid)
        self.robot_gru      = tf.keras.layers.GRUCell(units=self.robot_state_size)

        self.weight_dense_1 = tf.keras.layers.Dense(units=self.dims * self.n_bfuncs, activation=tf.keras.activations.relu)
        self.weight_dense_2 = tf.keras.layers.Dense(units=self.dims * self.n_bfuncs, activation=tf.keras.activations.relu)
        self.weight_dense_3 = tf.keras.layers.Dense(units=self.dims * self.n_bfuncs, activation=tf.keras.activations.linear)

        self.phase_dense_1 = tf.keras.layers.Dense(units=int(self.robot_state_size / 2.0), activation=tf.keras.activations.relu)
        self.phase_dense_2 = tf.keras.layers.Dense(units=1, activation=tf.keras.activations.hard_sigmoid)

        self.basismodel = BasisModel(dimensions=self.dims, nfunctions=self.n_bfuncs, scale=0.012)

    @tf.function
    def call(self, inputs, states, constants=None, training=False, mask=None, **kwargs):

        language_size = constants[0]
        features_size = constants[1]
        robot_size    = constants[2]
        batch_size = tf.shape(inputs)[0]
        # Get data ready
        in_robot = tf.slice(inputs, [0, 0], [batch_size, robot_size])
        language = tf.cast(tf.slice(inputs, [0, robot_size], [batch_size, language_size]), tf.int64)
        features = tf.reshape(tf.slice(inputs, [0, robot_size+language_size], [batch_size, features_size[0] * features_size[1]]), [batch_size, features_size[0], features_size[1]])

        st_robot_last  = states[0]
        st_gru_last    = states[1]

        if training:
            use_dropout = True
        else:
            use_dropout = False

        language  = self.embedding(language)
        language  = self.lng_gru(inputs=language, training=training) 

        # Calculate attention and expand it to match the feature size
        atn = self.attention((language, features))
        atn_w = tf.expand_dims(atn, 2)
        atn_w = tf.tile(atn_w, [1, 1, 5])
        # Compress image features and apply attention
        cfeatures = tf.math.multiply(atn_w, features)
        cfeatures = tf.math.reduce_sum(cfeatures, axis=1)
        cfeatures = tf.keras.backend.concatenate((cfeatures, language, in_robot), axis=1)
                # Policy Translation: Create weight + goal for DMP
        pt          = self.pt_global(cfeatures)
        pt          = self.dout(pt, training=tf.convert_to_tensor(use_dropout))
        dmp_dt      = self.pt_dt_2(self.pt_dt_1(pt)) + 0.1 # 0.1 prevents division by 0, just in case




        # Robot GRU:
        in_robot           = tf.cond(tf.convert_to_tensor(training), lambda: st_robot_last, lambda: in_robot)
        e_robot, gru_state = self.robot_gru(inputs=in_robot, states=[st_gru_last])

        # Internal state:
        x = tf.keras.backend.concatenate((cfeatures, e_robot), axis=1)

        # Use x to calcate the weights:
        weights = self.weight_dense_3(self.weight_dense_2(self.weight_dense_1(x)))
        weights = tf.keras.backend.reshape(weights, shape=[-1, self.dims, self.n_bfuncs])

        # Phase estimation, based on x:
        dt    = 1.0 / (500.0 * dmp_dt) # Calculates the actual dt
        phase = self.phase_dense_2(self.phase_dense_1(x))
        phase = phase + dt

        # Apply basis model:
        action, _ = self.basismodel((weights, tf.zeros_like(weights), phase))
        action = tf.squeeze(action)

        # Rebuild the state:
        new_states = (action, gru_state[0])
        # Return results (and state)
        return (action, phase, weights), new_states


# @author Simon Stepputtis <sstepput@asu.edu>, Interactive Robotics Lab, Arizona State University

import tensorflow as tf
import pathlib
from model_src.attention import TopDownAttention
from model_src.glove import GloveEmbeddings
from model_src.dmp import DynamicMovementPrimitive
from model_src.basismodel import BasisModel

class PolicyTranslationModel(tf.keras.Model):
    def __init__(self, od_path, glove_path, special=None):
        super(PolicyTranslationModel, self).__init__(name="policy_translation")
        self.units               = 32
        self.output_dims         = 7
        self.basis_functions     = 11

        if od_path != "":                
            od_path    = pathlib.Path(od_path)/"saved_model" 
            self.yolo = tf.saved_model.load(str(od_path))
            self.yolo = self.yolo.signatures['serving_default']
            self.yolo.trainable = False

        self.embedding = GloveEmbeddings(file_path=glove_path)
        self.lng_gru   = tf.keras.layers.GRU(units=self.units)

        self.attention = TopDownAttention(units=64)

        self.dout      = tf.keras.layers.Dropout(rate=0.25)

        # Units needs to be divisible by 7
        self.pt_global = tf.keras.layers.Dense(units=42, activation=tf.keras.activations.relu)

        self.pt_dt_1   = tf.keras.layers.Dense(units=self.units * 2, activation=tf.keras.activations.relu)
        self.pt_dt_2   = tf.keras.layers.Dense(units=1, activation=tf.keras.activations.hard_sigmoid)

        self.controller = tf.keras.layers.RNN(
            FeedbackController(
                robot_state_size = self.units, 
                rnn_state_size   = (tf.TensorShape([self.output_dims]), tf.TensorShape([self.units])),
                dimensions       = self.output_dims, 
                basis_functions  = self.basis_functions,
                special          = {'od_path': od_path, 'glove_path': glove_path, 'units': self.units, 'special': special}
            ), 
        return_sequences=True)
           
    # @tf.function 
    def call(self, inputs, training=False, use_dropout=True):
        if training:
            use_dropout = True

        language   = inputs[0]
        features   = inputs[1]
        # local      = features[:,:,:5]
        robot      = inputs[2]
        # dmp_state  = inputs[3]
        batch_size = tf.shape(language)[0]
        traj_len = robot.shape[1]

        robot_size = tf.shape(robot)[2]
        language_size = tf.shape(language)[1]
        features_size = tf.shape(features)[1:]

        language_float = tf.cast(language, tf.float32)
        # (B, T, X)
        truc = []
        for i in range(batch_size):
            r = []
            for j in range(traj_len):
                r.append(tf.concat([robot[i,j], language_float[i], tf.reshape(features[i], [features_size[0] * features_size[1]])], 0))
            truc.append(tf.stack(r, axis=0))
        mod_inp = tf.stack(truc, axis=0)

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
        start_joints  = robot[:,0,:]
        cfeatures = tf.keras.backend.concatenate((cfeatures, language, start_joints), axis=1)

        # Policy Translation: Create weight + goal for DMP
        pt          = self.pt_global(cfeatures)
        pt          = self.dout(pt, training=tf.convert_to_tensor(use_dropout))
        dmp_dt      = self.pt_dt_2(self.pt_dt_1(pt)) + 0.1 # 0.1 prevents division by 0, just in case
        # dmp_dt      = d_out[2]

        # Run the low-level controller
        initial_state = [
            start_joints,
            tf.zeros(shape=[batch_size, self.units], dtype=tf.float32)
        ]
        generated, phase, weights = self.controller(inputs=mod_inp, constants=(language_size, features_size, robot_size), initial_state=initial_state, training=training)

        return generated, (atn, dmp_dt, phase, weights)
    
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