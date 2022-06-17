// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_H_
#define POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_H_

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
// Member 'language'
#include "rosidl_generator_c/string.h"
// Member 'robot'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/NetworkPT in the package policy_translation.
typedef struct policy_translation__srv__NetworkPT_Request
{
  sensor_msgs__msg__Image image;
  rosidl_generator_c__String language;
  rosidl_generator_c__float__Sequence robot;
  bool reset;
  bool plot;
} policy_translation__srv__NetworkPT_Request;

// Struct for a sequence of policy_translation__srv__NetworkPT_Request.
typedef struct policy_translation__srv__NetworkPT_Request__Sequence
{
  policy_translation__srv__NetworkPT_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} policy_translation__srv__NetworkPT_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
// Member 'confidence'
// Member 'weights'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/NetworkPT in the package policy_translation.
typedef struct policy_translation__srv__NetworkPT_Response
{
  rosidl_generator_c__float__Sequence trajectory;
  rosidl_generator_c__float__Sequence confidence;
  int32_t timesteps;
  rosidl_generator_c__float__Sequence weights;
  float phase;
} policy_translation__srv__NetworkPT_Response;

// Struct for a sequence of policy_translation__srv__NetworkPT_Response.
typedef struct policy_translation__srv__NetworkPT_Response__Sequence
{
  policy_translation__srv__NetworkPT_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} policy_translation__srv__NetworkPT_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_H_
