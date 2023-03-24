# LanguagePolicies

## Language conditioned Imitation Learning for Robot Learning Tasks - Improved

Yubin Kim, Chardine Clément

## Introduction

Being able to communicate with robots with ease will be an important part of human-to-machine interactions in the future. One privileged channel for this goal relies on being able to describe a task to be performed by a machine. In that regard, we base our work on [**LanguagePolicies**](https://arxiv.org/pdf/2010.12083.pdf), a framework developed in 2020 by Stepputis & al.

This framework relies on some key features that are at the heart of its success:

### **Attention**

The algorithm takes a sentence and an image of the scene as an input, and pre-processes it using a transformer module. We will describe how this module works on a low-level later, but intuitively, it functions as a way to recognize relationships and correlations among elements of a list-like object.

This concept of attention allows us to make sense of multimodal inputs, and interpret them in a meaningful way for the algorithm. It yields a representation of an action, identifying what is to be done, and onto what. This first part can be achieved by advanced language parsing, but the latter is more complex. It allows for a representation of the combined input of a visual stimulus (the objects and their position) and textual input (naming the subject of the action).

### Controller

The controller is actually a RNN made of single-step controllers. Each of them is the same, and takes as input the current robot state, and a feature vector (given by the attention module) as a constant.
It is more complex than a simple dense neural network and separates the tasks to better control the overall behaviour. It infers a phase (a representation of the robot joints configuration) and a primitive action from the features and current state. The primitive action is encoded by a weight vector, which can be interpreted by a hardcoded library into a change in the robot state.

This carefully crafter controller is very difficult to change and the researchers experiments have shown that modifying it results in poorer if not non-existing performances.

This framework has been proven very efficient, but it lacks an important feature: it is unable to adapt to changes in the environment. Because the attention features are fed as constants to the controller, if an object is moved or the user decides to change the action before the end of the trajectory, the robot won’t stop and either way, fail its task or perform an unwanted move.

Therefore our goal is to adapt and improve this algorithm, for it to be up-to-date by 2022 standards, and be more versatile.

## The highlight of the original algorithm

In this section we will review the core features of the original model, to identify what are its strengths, what is necessary for it to work, and also what can be modified to achieve our goal.

### Structure

![Structure of the original LanguagePolicies framework](Untitled.png)

Structure of the original LanguagePolicies framework

There are plenty of notations on this, so lets describe each quantity:

- $f_i$ - Visual object embedding
- $s$ - Sentence embedding
- $a_i$ - Attention likelihood, the relative importance of the $(f_i,s)$ couple
- $e'$ - Visual object embedding distribution
- $e$ - Attention

- $h_r$ - State embedding (depending on previous states due to GRU cell)
- $w_t$ - Motor primitive weight
- $\phi_t$ - Robot phase (increased by interpolation over a timestep $\Delta t$, depending of the goal)
- $r_{t+1}$ - Next state, inferred though hardcoded primitive library

When training, most of the modules behaviour is controlled by well-crafted loss. It is realized in a end-to-end fashion, using the pondered sum of five sub losses.

$L = \alpha_a L_a+ \alpha_t L_t + \alpha_\phi L_\phi + \alpha_w L_w + \alpha_\Delta L_\Delta$

$L_a = -sum( x_ilog(y_i))$ for inputs and output of the attention module

$L_t = MSE(R,R*)$ where $R$ is the trajectory

$L_\phi = MSE(\phi_t,\phi_t*)$ for phase estimation

$L_w = MSE(w_t,w_{t+1})$ for smooth weights transition

$L_\Delta = MSE(\Delta\phi,\Delta\phi*)$ for phase progression

### Attention

> “*Attention is all you need”*
> 

This famous quote is a the hard of many breakthroughs in today’s research in Machine Learning. It can be intuitively visualized, and best exampled by the attention weights within a sentence to translate.

![Attention weights between two translated sentences of identical meaning. The yellower, the more related to foreign word.](Untitled%201.png)

Attention weights between two translated sentences of identical meaning. The yellower, the more related to foreign word.

This concept allows to efficiently extract connections from lists of tensors. Therefore, using this concept, it is possible to efficiently embed very complex inputs into a tensor, with great efficiency. It should be noted that we are using a Scaled Dot-Product Attention here, as opposed to Multi-Head Attention (which is basically many scaled-dot product attention performed and concatenated, mostly of encoding purposes).

For more detail, here is a pseudo-code for the Scaled-Dot Product Attention, used in the LanguagePolicies algorithm.

```python
**Inputs : X_in (list of tensors)**
for i in X_in.length() :
	**query**[i] = **Q** * X_in[i]
	**key**[i] = **K** * X_in[i]
	**value**[i] = **V** * X_in[i]
for i in X_in.length():
	*this_query* = **query**[i]
	for j in X_in.length():
		*relevance*[j] = *this_query* * **key**[j]
	*relevance* = scaled_softmax(*relevance*)
	out[i] = 0
	for j in X_in.length():
		out[i] += *relevance*[j] * **value**[j]
**Output : out**
```

![Structure of the two types of attention](Untitled%202.png)

Structure of the two types of attention

### Controller

We already described the controller with sufficient details, and its goal, components and interesting points should be clear now. For clarity purposes, here is the pseudo-code for the modules within it.

```python
**Inputs : features, state**
gru_state = GRU(state)
x = concat(features, gru_state)

*weights* = **DENSE3**(x)
*phase* = **DENSE2**(x)
*phase* += delta_phase

*action* = basismodel(*weights*, *phase*)

**Outputs : action, gru_state**
```

```python
**Inputs : weights, phase**
g = gaussian(phase)
		#turn the phase into a [0,1] value, gaussian over time
**Output : weight.T * g**
```

```python
**Inputs : features, state**
action, gru_state = controller(features, state)
next_state, utils = dmp(action, gru_state)
		#dmp is an hardcoded primitive library
**Outputs : next_state, utils**
```

### Spotlight

At this point, the key features of the algorithm have been addressed, here is a simulation of it in action to better understand the process involved.

![Overview of the model execution when given a task](model.gif)

Overview of the model execution when given a task

In the end, we can identify key features of this framework that allow it to be powerful, and achieve state-of-the-art performances :

- Training is done in an end-to-end fashion, with the loss being summed over the sub losses to strengthen the imitation incentives over “long” policies.
- The algorithm is able to start from then end point, to perform the next task, without trouble.
- It shows good generalization features

With all that knowledge, we can build upon this structure to make the algorithm able to handle changing environments and improve its abilities.

## Improving perceptions

**Harder** *(tasks)*, **Better** *(understanding)*, **Faster** *(processing)*, **Stronger** *(model)*

### BERT

BERT makes use of Transformer, an attention mechanism that learns contextual relations between sequential input, such as text. In its vanilla form, Transformer includes two separate mechanisms: an encoder that reads the text input and a decoder that produces a prediction for the task. Since BERT’s goal is to generate a language model, only the encoder mechanism is necessary. The detailed workings of Transformer are described in a [paper](https://arxiv.org/pdf/1706.03762.pdf) by Google.

In a nutshell, the power of BERT comes from its ability to look at the entire sequence of words in order to get an embedding. Here is an overview of its structure. In our case, we chose a final embedding of **768 scalar features**, which allows for a fine understanding of the wanted task.

![Structure of BERT, W being words, and W’ being embeddings.](Untitled%203.png)

Structure of BERT, W being words, and W’ being embeddings.

After fine-tuning it for better performances on sentences including common words for our purpose (mostly table items, like cups, bowls… but also colours, size, or position indicators), we compare BERT against GloVe, used in the baseline algorithm.

![Comparative similarity of sentences embedded by BERT (top) and GloVe (bottom)](bert.png)

Comparative similarity of sentences embedded by BERT (top) and GloVe (bottom)

In this example, we can see that GloVe understands sentences as series of words with little understanding of the context. The embedding for the first *s1* is very close to the first *s2*, whereas the designated object is very different (the same object is unlikely to be called “red bowl” or “blue bowl” indistinctively). On that ground, BERT performs better and the similarity of the embeddings are much closer to a kind of probability that the same object/action can be referred to by the two sentences, given a context.

The second phase shows the power of BERT against complexity of context. The inputs are in meaning, really similar to the first ones, but more complex to analyse. BERT navigates this and the sentence similarity shows little change, whereas Glove is very sensitive to rephasing. This is a flaw, because the intent of the user should translate into an action, no matter the way this desire is formulated.

On that ground, BERT is a huge improvement because it helps Human-Machine Communication. 

### YOLO

To understand the YOLO algorithm, it is necessary to establish what is actually being predicted. Ultimately, we aim to predict a class of an object and the bounding box specifying object location. Each bounding box can be described using four descriptors:
- center of a bounding box (**bxby**)
- width (**bw**)
- height (**bh**)
- value **cis** corresponding to a class of an object (and confidence)

This is a major difference with FRCNN, that divides the image into small regions, and classify them. This requires a lot of convolutional layers to get it done, and to look at the image a few times.

Because the amount of computations of FRCNN is high, YOLO is a faster way to detect objects, which is crucial if we want our algorithm to run in real-time, and be able to quickly react to changing environments.

![Architecture of YOLO](Untitled%204.png)

Architecture of YOLO

The purpose of this implementation is not to improve detection performances, because with fine tuning, on a limited amount of classes, FRCNN is already at 98% accuracy. We show here that YOLO yields similar performances, but with greater speed.

|  | mAP [0.5, 0.95] (COCO) | mAP0.5 (COCO) | Accuracy (40 classes) | Average Computation Time (CPU) |
| --- | --- | --- | --- | --- |
| FRCNN | 34,9% | 54,7% | 98% | 8,097s |
| YOLO | 36,4% | 56,8% | 98% | 1.194s |

We realized this comparison on COCO dataset (128 classes), and on a more limited dataset provided by the authors of the original paper with 40 classes of objects they use. The most important metric is the computation time to infer features from an image by YOLO.

Unable to use GPU-powered computers, we can confidently expect that a graphic card would allow real-time identifications of features.

### Results

![                                                                 Loss curve & Model summary](Untitled%205.png)

                                                                 Loss curve & Model summary

In this first step, we implemented our changes into the original algorithm, in order to assess that our added complexity is not lost through the wires of the model. The measure it, we trained the network for 36 hours (200 epochs), and infer the results when asking for a variety of basic tasks, such as pouring or picking an object. The simulation has been done using CoppeliaSim and the custom ROS2 libraries to infer primitive movements.

![CoppeliaSim rendering of different tasks performed by the model](Untitled%206.png)

CoppeliaSim rendering of different tasks performed by the model

Here are shown the results of this training, with the final models being trained on 40,000 samples.

|  | PICK success | POUR success | Dtc | Pln | Qdif | MAE | Dst | Error: None | Error: C | Error: S | Error: F | Error: C+S | Error: C+F | Error: F+S | Error: C+S+F |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Dataset size 2,500 | 0.48 | 0.13 | 0.55 | 0.33 | 0.54 | 0.18 | 13.88 | 0.33 | 0.04 | 0.23 | 0.29 | 0.00 | 0.00 | 0.51 | 0.00 |
| Dataset size 5,000 | 0.58 | 0.17 | 0.59 | 0.32 | 0.65 | 0.20 | 12.13 | 0.67 | 0.09 | 0.15 | 0.37 | 0.08 | 0.00 | 0.30 | 0.00 |
| Dataset size 10,000 | 0.54 | 0.35 | 0.66 | 0.45 | 0.67 | 0.11 | 11.92 | 0.83 | 0.42 | 0.69 | 0.52 | 0.25 | 0.23 | 0.70 | 0.44 |
| Dataset size 20,000 | 0.60 | 0.52 | 0.70 | 0.64 | 0.81 | 0.13 | 11.73 | 0.83 | 0.71 | 0.85 | 0.63 | 0.48 | 0.33 | 0.70 | 0.56 |
| Dataset size 30,000 | 0.74 | 0.66 | 0.74 | 0.70 | 0.84 | 0.05 | 10.12 | 0.67 | 0.86 | 0.92 | 0.70 | 0.58 | 0.33 | 0.74 | 0.80 |
| Original LP | 0.77 | 0.79 | 0.83 | 0.78 | 0.88 | 0.05 | 9.60 | 0.83 | 0.80 | 1.00 | 0.79 | 0.60 | 0.33 | 0.73 | 0.89 |
| Our model | 0.87 | 0.83 | 0.83 | 0.85 | 0.91 | 0.04 | 8.70 | 1.00 | 0.80 | 1.00 | 0.79 | 0.61 | 0.7 | 0.73 | 1.00 |

To clarify this big table. PICK describes a task which intent involves picking an object, POUR involves pouring an already grasped object into another one.

For the metrics, Dtc is the object detection rate, PIn is the proportion of content poured inside an object, Qdif is the percentage of correctly poured quantities, MAE is the mean-average error in the robot joint configuration, and Dst is the distance from the end effector to the designated target.

The error statistics describe the success rate of the pouring tasks depending on which combination of visual features was used to uniquely describe the target.

On a final note, our model is **9.7% faster**, on average, than the original algorithm. This is due to the BERT model taking more time to produce an embedding, and therefore reducing the time gained from YOLO.

Our improved model, therefore, performs better than the original one, thanks to the modifications we did to the perceptions modules. However, there is a major point to address: the ability to react to changing contexts. This is why we build upon this to make our adaptive model.

## Adaptive model

Now that we see that our new perception modules improve the robot performances, we can use this to make the model more versatile. What we aim to do is a robot able to frequently update its perceptions, and when something changes (would it be an object that is moved, a counter-order that is given…) react accordingly.

This is a great advantage for both a robot that can be used in the real-world applications (help people with the manipulation of tools for example or work in harmony with another robot) and also for safety purposes because, for the baseline model, dangerous actions will be performed “blindly” once they are started, and cannot be modified or stopped by the Human-Machine Communication channel.

### Structure

The problem to be addressed in the baseline model is the RNN loop that is run to generate the whole trajectory, once the perceptions have been processed.
We overcome this by replacing this looping controller by a one step controller, that can be run step by step. In this regard, our goal is to break the RNN temporally.

Here is what the architecture looks like then:

![Architecture of our model](Untitled%207.png)

Architecture of our model

We intuitively feel like one major aspect of this structure rely on the flexibility it offers. First we process the perceptions through an attention layer fed to a GRU cell. This combination allows for a dynamically updated perception, and when the context changes, the GRU can adapt the embedding so that it will be processed in a better way by the algorithm. This acts as a feedback controller inside the feedback controller.

Also, because we split the RNN, we can have more leverage on the way it is run. For training purposes, we can run it all the way to the end of the trajectory and compare with ground truth. For inference, because we output the computed timestep at which an action is to be run, we can time the algorithm to run either way very frequently if context is critical, or less often, if it is not of concern.

We also change the way the loss is calculated, it is no more the sum of all sub-losses through all timesteps, it is now calculated as the sum of sub-losses, but at timestep t. 

### Experiment

![Untitled](Untitled%208.png)

**Experiment Set-up**

---

| CPU | Intel i7-9750H (2.6GHz) | Framework | TensorFlow 2.6.2 |
| --- | --- | --- | --- |
| OS | Ubuntu 18.04 | ROS distro | ROS2 Eloquent |
| Simulator | CoppeliaSim 4.1.0 | Robot toolkit | PyRep 4.1 |

**Main Tasks - Pick up, Pour**

---

![Untitled](Untitled%209.png)

These tasks are identical to the previous tasks which are picking up an object or pouring something into a container. These tasks were conducted once again to compare the results with the previous experiments.  

**Visual Perturbation and Language Disambiguation**

---

![Untitled](Untitled%2010.png)

This is a new experiment where we add perturbations to the visual and language modalities so that we can evaluate our model’s robustness. In the visual perturbation, we add some random light conditions to the visual observation and in the language case, we make the voice command more ambiguous than the original command. 

### Results

The below table shows our new model’s performance and the previous model’s performance for the 2-phase tasks (*i.e.* **pick up**, **pour**):

|  | PICK success | POUR success | Dtc | Pln | Qdif | MAE | Dst | Error: None | Error: C | Error: S | Error: F | Error: C+S | Error: C+F | Error: F+S | Error: C+S+F |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Dataset size 2,500 | 0.48 | 0.13 | 0.55 | 0.33 | 0.54 | 0.18 | 13.88 | 0.33 | 0.04 | 0.23 | 0.29 | 0.00 | 0.00 | 0.51 | 0.00 |
| Dataset size 5,000 | 0.58 | 0.17 | 0.59 | 0.32 | 0.65 | 0.20 | 12.13 | 0.67 | 0.09 | 0.15 | 0.37 | 0.08 | 0.00 | 0.30 | 0.00 |
| Dataset size 10,000 | 0.54 | 0.35 | 0.66 | 0.45 | 0.67 | 0.11 | 11.92 | 0.83 | 0.42 | 0.69 | 0.52 | 0.25 | 0.23 | 0.70 | 0.44 |
| Dataset size 20,000 | 0.60 | 0.52 | 0.70 | 0.64 | 0.81 | 0.13 | 11.73 | 0.83 | 0.71 | 0.85 | 0.63 | 0.48 | 0.33 | 0.70 | 0.56 |
| Dataset size 30,000 | 0.74 | 0.66 | 0.74 | 0.70 | 0.84 | 0.05 | 10.12 | 0.67 | 0.86 | 0.92 | 0.70 | 0.58 | 0.33 | 0.74 | 0.80 |
| Original LP | 0.77 | 0.79 | 0.83 | 0.78 | 0.88 | 0.05 | 9.60 | 0.83 | 0.80 | 1.00 | 0.79 | 0.60 | 0.33 | 0.73 | 0.89 |
| Perception Improved Model (Ours) | 0.87 | 0.83 | 0.83 | 0.85 | 0.91 | 0.04 | 8.70 | 1.00 | 0.80 | 1.00 | 0.79 | 0.61 | 0.7 | 0.73 | 1.00 |
| Adaptive Model (Ours) | 0.93 | 0.85 | 0.85 | 0.84 | 0.93 | 0.03 | 6.50 | 1.00 | 0.82 | 1.00 | 0.80 | 0.70 | 0.6 | 0.73 | 1.00 |

Also, for the perturbation tasks, the below table shows the performance of the Adaptive Model: 

|  | Pick | Pour | Seq | Dtc | PIn | MAE |
| --- | --- | --- | --- | --- | --- | --- |
| Illumination | 0.81 | 0.68 | 0.63 | 0.83 | 0.92 | 0.06 |
| Language | 0.84 | 0.81 | 0.72 | 0.84 | 0.85 | 0.03 |

![Example of a physical perturbation](Sans_titre-1.png)

Example of a physical perturbation

According to the results, our newly proposed model (*i.e.* Adaptive Model) has a **6.67%** improvement on the pick-up task and **2.35%** improvement on the pouring task compared to the perception improved model. Also, it has a **17.20%**, and **7.06%** improvement for each task compared to the original method. This indicates that the modifications that we made in the Adaptive Model influenced more on accomplishing the tasks in a robust manner. 

## Summary and future works

- Model motivated by insights into the **human teaching** process, an approach for end-to-end IL of robot manipulation policies that combines **language**, **vision**, and **control** is presented
- The previous model showed brittle performance when the language is ambiguous which we usually do in a real-world setting
- The resulting **language-conditioned visuomotor policies** can be conditioned at runtime on new human commands and instructions, which allows for more fine-grained control over the trained policies while also reducing situational ambiguity
- The results outperformed alternative methods, while also **generalizing** across a variety of experimental setups
- In future works, we aim to further improve to adaptive model and think of more complex tasks that we can also approach with a **multi-view setting**

Time constraints and dataset limitations didn’t allow us to test the robustness of our model under more complex context changes. The original dataset only contains still images of the environment, with no possibility of finding two that are close together (simulating a displacement of objects). In the future, our goal is to create such a dataset and to realize a test with this setup.
This would be part of a more general series of experiments, to evaluate the model's robustness over **task disruption**, such as stopping commands, counter-orders, and moving objects. However, as we have seen with the smaller perturbations, our model is resilient over difficult contexts, outside of the training boundaries. We can therefore **expect good performances** in those conditions too.

### Code

---

[GitHub - ybkim95/LanguagePolicies: AI 617 Final Project](https://github.com/ybkim95/LanguagePolicies.git)
