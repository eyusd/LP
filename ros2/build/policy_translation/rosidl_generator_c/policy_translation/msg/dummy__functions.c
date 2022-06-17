// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice
#include "policy_translation/msg/dummy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image__functions.h"

bool
policy_translation__msg__Dummy__init(policy_translation__msg__Dummy * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    policy_translation__msg__Dummy__fini(msg);
    return false;
  }
  return true;
}

void
policy_translation__msg__Dummy__fini(policy_translation__msg__Dummy * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

policy_translation__msg__Dummy *
policy_translation__msg__Dummy__create()
{
  policy_translation__msg__Dummy * msg = (policy_translation__msg__Dummy *)malloc(sizeof(policy_translation__msg__Dummy));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(policy_translation__msg__Dummy));
  bool success = policy_translation__msg__Dummy__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
policy_translation__msg__Dummy__destroy(policy_translation__msg__Dummy * msg)
{
  if (msg) {
    policy_translation__msg__Dummy__fini(msg);
  }
  free(msg);
}


bool
policy_translation__msg__Dummy__Sequence__init(policy_translation__msg__Dummy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  policy_translation__msg__Dummy * data = NULL;
  if (size) {
    data = (policy_translation__msg__Dummy *)calloc(size, sizeof(policy_translation__msg__Dummy));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = policy_translation__msg__Dummy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        policy_translation__msg__Dummy__fini(&data[i - 1]);
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
policy_translation__msg__Dummy__Sequence__fini(policy_translation__msg__Dummy__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      policy_translation__msg__Dummy__fini(&array->data[i]);
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

policy_translation__msg__Dummy__Sequence *
policy_translation__msg__Dummy__Sequence__create(size_t size)
{
  policy_translation__msg__Dummy__Sequence * array = (policy_translation__msg__Dummy__Sequence *)malloc(sizeof(policy_translation__msg__Dummy__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = policy_translation__msg__Dummy__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
policy_translation__msg__Dummy__Sequence__destroy(policy_translation__msg__Dummy__Sequence * array)
{
  if (array) {
    policy_translation__msg__Dummy__Sequence__fini(array);
  }
  free(array);
}
