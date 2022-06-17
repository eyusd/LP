// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__MSG__DUMMY__STRUCT_H_
#define POLICY_TRANSLATION__MSG__DUMMY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.h"

// Struct defined in msg/Dummy in the package policy_translation.
typedef struct policy_translation__msg__Dummy
{
  sensor_msgs__msg__Image image;
} policy_translation__msg__Dummy;

// Struct for a sequence of policy_translation__msg__Dummy.
typedef struct policy_translation__msg__Dummy__Sequence
{
  policy_translation__msg__Dummy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} policy_translation__msg__Dummy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POLICY_TRANSLATION__MSG__DUMMY__STRUCT_H_
