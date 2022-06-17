// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from policy_translation:srv/TuneNetwork.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__SRV__TUNE_NETWORK__STRUCT_H_
#define POLICY_TRANSLATION__SRV__TUNE_NETWORK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TuneNetwork in the package policy_translation.
typedef struct policy_translation__srv__TuneNetwork_Request
{
  int32_t epochs;
} policy_translation__srv__TuneNetwork_Request;

// Struct for a sequence of policy_translation__srv__TuneNetwork_Request.
typedef struct policy_translation__srv__TuneNetwork_Request__Sequence
{
  policy_translation__srv__TuneNetwork_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} policy_translation__srv__TuneNetwork_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TuneNetwork in the package policy_translation.
typedef struct policy_translation__srv__TuneNetwork_Response
{
  bool success;
} policy_translation__srv__TuneNetwork_Response;

// Struct for a sequence of policy_translation__srv__TuneNetwork_Response.
typedef struct policy_translation__srv__TuneNetwork_Response__Sequence
{
  policy_translation__srv__TuneNetwork_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} policy_translation__srv__TuneNetwork_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POLICY_TRANSLATION__SRV__TUNE_NETWORK__STRUCT_H_
