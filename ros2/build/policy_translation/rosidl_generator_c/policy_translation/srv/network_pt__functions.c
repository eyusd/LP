// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice
#include "policy_translation/srv/network_pt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image__functions.h"
// Member `language`
#include "rosidl_generator_c/string_functions.h"
// Member `robot`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
policy_translation__srv__NetworkPT_Request__init(policy_translation__srv__NetworkPT_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    policy_translation__srv__NetworkPT_Request__fini(msg);
    return false;
  }
  // language
  if (!rosidl_generator_c__String__init(&msg->language)) {
    policy_translation__srv__NetworkPT_Request__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_generator_c__float__Sequence__init(&msg->robot, 0)) {
    policy_translation__srv__NetworkPT_Request__fini(msg);
    return false;
  }
  // reset
  // plot
  return true;
}

void
policy_translation__srv__NetworkPT_Request__fini(policy_translation__srv__NetworkPT_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // language
  rosidl_generator_c__String__fini(&msg->language);
  // robot
  rosidl_generator_c__float__Sequence__fini(&msg->robot);
  // reset
  // plot
}

policy_translation__srv__NetworkPT_Request *
policy_translation__srv__NetworkPT_Request__create()
{
  policy_translation__srv__NetworkPT_Request * msg = (policy_translation__srv__NetworkPT_Request *)malloc(sizeof(policy_translation__srv__NetworkPT_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(policy_translation__srv__NetworkPT_Request));
  bool success = policy_translation__srv__NetworkPT_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
policy_translation__srv__NetworkPT_Request__destroy(policy_translation__srv__NetworkPT_Request * msg)
{
  if (msg) {
    policy_translation__srv__NetworkPT_Request__fini(msg);
  }
  free(msg);
}


bool
policy_translation__srv__NetworkPT_Request__Sequence__init(policy_translation__srv__NetworkPT_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  policy_translation__srv__NetworkPT_Request * data = NULL;
  if (size) {
    data = (policy_translation__srv__NetworkPT_Request *)calloc(size, sizeof(policy_translation__srv__NetworkPT_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = policy_translation__srv__NetworkPT_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        policy_translation__srv__NetworkPT_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
policy_translation__srv__NetworkPT_Request__Sequence__fini(policy_translation__srv__NetworkPT_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      policy_translation__srv__NetworkPT_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

policy_translation__srv__NetworkPT_Request__Sequence *
policy_translation__srv__NetworkPT_Request__Sequence__create(size_t size)
{
  policy_translation__srv__NetworkPT_Request__Sequence * array = (policy_translation__srv__NetworkPT_Request__Sequence *)malloc(sizeof(policy_translation__srv__NetworkPT_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = policy_translation__srv__NetworkPT_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
policy_translation__srv__NetworkPT_Request__Sequence__destroy(policy_translation__srv__NetworkPT_Request__Sequence * array)
{
  if (array) {
    policy_translation__srv__NetworkPT_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `trajectory`
// Member `confidence`
// Member `weights`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
policy_translation__srv__NetworkPT_Response__init(policy_translation__srv__NetworkPT_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!rosidl_generator_c__float__Sequence__init(&msg->trajectory, 0)) {
    policy_translation__srv__NetworkPT_Response__fini(msg);
    return false;
  }
  // confidence
  if (!rosidl_generator_c__float__Sequence__init(&msg->confidence, 0)) {
    policy_translation__srv__NetworkPT_Response__fini(msg);
    return false;
  }
  // timesteps
  // weights
  if (!rosidl_generator_c__float__Sequence__init(&msg->weights, 0)) {
    policy_translation__srv__NetworkPT_Response__fini(msg);
    return false;
  }
  // phase
  return true;
}

void
policy_translation__srv__NetworkPT_Response__fini(policy_translation__srv__NetworkPT_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  rosidl_generator_c__float__Sequence__fini(&msg->trajectory);
  // confidence
  rosidl_generator_c__float__Sequence__fini(&msg->confidence);
  // timesteps
  // weights
  rosidl_generator_c__float__Sequence__fini(&msg->weights);
  // phase
}

policy_translation__srv__NetworkPT_Response *
policy_translation__srv__NetworkPT_Response__create()
{
  policy_translation__srv__NetworkPT_Response * msg = (policy_translation__srv__NetworkPT_Response *)malloc(sizeof(policy_translation__srv__NetworkPT_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(policy_translation__srv__NetworkPT_Response));
  bool success = policy_translation__srv__NetworkPT_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
policy_translation__srv__NetworkPT_Response__destroy(policy_translation__srv__NetworkPT_Response * msg)
{
  if (msg) {
    policy_translation__srv__NetworkPT_Response__fini(msg);
  }
  free(msg);
}


bool
policy_translation__srv__NetworkPT_Response__Sequence__init(policy_translation__srv__NetworkPT_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  policy_translation__srv__NetworkPT_Response * data = NULL;
  if (size) {
    data = (policy_translation__srv__NetworkPT_Response *)calloc(size, sizeof(policy_translation__srv__NetworkPT_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = policy_translation__srv__NetworkPT_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        policy_translation__srv__NetworkPT_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
policy_translation__srv__NetworkPT_Response__Sequence__fini(policy_translation__srv__NetworkPT_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      policy_translation__srv__NetworkPT_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

policy_translation__srv__NetworkPT_Response__Sequence *
policy_translation__srv__NetworkPT_Response__Sequence__create(size_t size)
{
  policy_translation__srv__NetworkPT_Response__Sequence * array = (policy_translation__srv__NetworkPT_Response__Sequence *)malloc(sizeof(policy_translation__srv__NetworkPT_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = policy_translation__srv__NetworkPT_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
policy_translation__srv__NetworkPT_Response__Sequence__destroy(policy_translation__srv__NetworkPT_Response__Sequence * array)
{
  if (array) {
    policy_translation__srv__NetworkPT_Response__Sequence__fini(array);
  }
  free(array);
}
