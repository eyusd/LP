// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "policy_translation/msg/dummy__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace policy_translation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_serialize(
  const policy_translation::msg::Dummy & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  policy_translation::msg::Dummy & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
get_serialized_size(
  const policy_translation::msg::Dummy & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
max_serialized_size_Dummy(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, msg, Dummy)();

#ifdef __cplusplus
}
#endif

#endif  // POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
