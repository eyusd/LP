// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/msg/dummy__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace policy_translation
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Dummy_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) policy_translation::msg::Dummy(_init);
}

void Dummy_fini_function(void * message_memory)
{
  auto typed_message = static_cast<policy_translation::msg::Dummy *>(message_memory);
  typed_message->~Dummy();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Dummy_message_member_array[1] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::msg::Dummy, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Dummy_message_members = {
  "policy_translation::msg",  // message namespace
  "Dummy",  // message name
  1,  // number of fields
  sizeof(policy_translation::msg::Dummy),
  Dummy_message_member_array,  // message members
  Dummy_init_function,  // function to initialize message memory (memory has to be allocated)
  Dummy_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Dummy_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Dummy_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace policy_translation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::msg::Dummy>()
{
  return &::policy_translation::msg::rosidl_typesupport_introspection_cpp::Dummy_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, policy_translation, msg, Dummy)() {
  return &::policy_translation::msg::rosidl_typesupport_introspection_cpp::Dummy_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
