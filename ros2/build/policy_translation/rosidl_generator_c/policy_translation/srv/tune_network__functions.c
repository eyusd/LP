// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from policy_translation:srv/TuneNetwork.idl
// generated code does not contain a copyright notice
#include "policy_translation/srv/tune_network__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
policy_translation__srv__TuneNetwork_Request__init(policy_translation__srv__TuneNetwork_Request * msg)
{
  if (!msg) {
    return false;
  }
  // epochs
  return true;
}

void
policy_translation__srv__TuneNetwork_Request__fini(policy_translation__srv__TuneNetwork_Request * msg)
{
  if (!msg) {
    return;
  }
  // epochs
}

policy_translation__srv__TuneNetwork_Request *
policy_translation__srv__TuneNetwork_Request__create()
{
  policy_translation__srv__TuneNetwork_Request * msg = (policy_translation__srv__TuneNetwork_Request *)malloc(sizeof(policy_translation__srv__TuneNetwork_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(policy_translation__srv__TuneNetwork_Request));
  bool success = policy_translation__srv__TuneNetwork_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
policy_translation__srv__TuneNetwork_Request__destroy(policy_translation__srv__TuneNetwork_Request * msg)
{
  if (msg) {
    policy_translation__srv__TuneNetwork_Request__fini(msg);
  }
  free(msg);
}


bool
policy_translation__srv__TuneNetwork_Request__Sequence__init(policy_translation__srv__TuneNetwork_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  policy_translation__srv__TuneNetwork_Request * data = NULL;
  if (size) {
    data = (policy_translation__srv__TuneNetwork_Request *)calloc(size, sizeof(policy_translation__srv__TuneNetwork_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = policy_translation__srv__TuneNetwork_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        policy_translation__srv__TuneNetwork_Request__fini(&data[i - 1]);
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
policy_translation__srv__TuneNetwork_Request__Sequence__fini(policy_translation__srv__TuneNetwork_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      policy_translation__srv__TuneNetwork_Request__fini(&array->data[i]);
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

policy_translation__srv__TuneNetwork_Request__Sequence *
policy_translation__srv__TuneNetwork_Request__Sequence__create(size_t size)
{
  policy_translation__srv__TuneNetwork_Request__Sequence * array = (policy_translation__srv__TuneNetwork_Request__Sequence *)malloc(sizeof(policy_translation__srv__TuneNetwork_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = policy_translation__srv__TuneNetwork_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
policy_translation__srv__TuneNetwork_Request__Sequence__destroy(policy_translation__srv__TuneNetwork_Request__Sequence * array)
{
  if (array) {
    policy_translation__srv__TuneNetwork_Request__Sequence__fini(array);
  }
  free(array);
}


bool
policy_translation__srv__TuneNetwork_Response__init(policy_translation__srv__TuneNetwork_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
policy_translation__srv__TuneNetwork_Response__fini(policy_translation__srv__TuneNetwork_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

policy_translation__srv__TuneNetwork_Response *
policy_translation__srv__TuneNetwork_Response__create()
{
  policy_translation__srv__TuneNetwork_Response * msg = (policy_translation__srv__TuneNetwork_Response *)malloc(sizeof(policy_translation__srv__TuneNetwork_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(policy_translation__srv__TuneNetwork_Response));
  bool success = policy_translation__srv__TuneNetwork_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
policy_translation__srv__TuneNetwork_Response__destroy(policy_translation__srv__TuneNetwork_Response * msg)
{
  if (msg) {
    policy_translation__srv__TuneNetwork_Response__fini(msg);
  }
  free(msg);
}


bool
policy_translation__srv__TuneNetwork_Response__Sequence__init(policy_translation__srv__TuneNetwork_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  policy_translation__srv__TuneNetwork_Response * data = NULL;
  if (size) {
    data = (policy_translation__srv__TuneNetwork_Response *)calloc(size, sizeof(policy_translation__srv__TuneNetwork_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = policy_translation__srv__TuneNetwork_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        policy_translation__srv__TuneNetwork_Response__fini(&data[i - 1]);
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
policy_translation__srv__TuneNetwork_Response__Sequence__fini(policy_translation__srv__TuneNetwork_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      policy_translation__srv__TuneNetwork_Response__fini(&array->data[i]);
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

policy_translation__srv__TuneNetwork_Response__Sequence *
policy_translation__srv__TuneNetwork_Response__Sequence__create(size_t size)
{
  policy_translation__srv__TuneNetwork_Response__Sequence * array = (policy_translation__srv__TuneNetwork_Response__Sequence *)malloc(sizeof(policy_translation__srv__TuneNetwork_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = policy_translation__srv__TuneNetwork_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
policy_translation__srv__TuneNetwork_Response__Sequence__destroy(policy_translation__srv__TuneNetwork_Response__Sequence * array)
{
  if (array) {
    policy_translation__srv__TuneNetwork_Response__Sequence__fini(array);
  }
  free(array);
}
