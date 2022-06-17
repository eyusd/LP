// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "policy_translation/msg/dummy__rosidl_typesupport_introspection_c.h"
#include "policy_translation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "policy_translation/msg/dummy__functions.h"
#include "policy_translation/msg/dummy__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Dummy__rosidl_typesupport_introspection_c__Dummy_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  policy_translation__msg__Dummy__init(message_memory);
}

void Dummy__rosidl_typesupport_introspection_c__Dummy_fini_function(void * message_memory)
{
  policy_translation__msg__Dummy__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Dummy__rosidl_typesupport_introspection_c__Dummy_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__msg__Dummy, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Dummy__rosidl_typesupport_introspection_c__Dummy_message_members = {
  "policy_translation__msg",  // message namespace
  "Dummy",  // message name
  1,  // number of fields
  sizeof(policy_translation__msg__Dummy),
  Dummy__rosidl_typesupport_introspection_c__Dummy_message_member_array,  // message members
  Dummy__rosidl_typesupport_introspection_c__Dummy_init_function,  // function to initialize message memory (memory has to be allocated)
  Dummy__rosidl_typesupport_introspection_c__Dummy_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Dummy__rosidl_typesupport_introspection_c__Dummy_message_type_support_handle = {
  0,
  &Dummy__rosidl_typesupport_introspection_c__Dummy_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_policy_translation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, msg, Dummy)() {
  Dummy__rosidl_typesupport_introspection_c__Dummy_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!Dummy__rosidl_typesupport_introspection_c__Dummy_message_type_support_handle.typesupport_identifier) {
    Dummy__rosidl_typesupport_introspection_c__Dummy_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Dummy__rosidl_typesupport_introspection_c__Dummy_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
