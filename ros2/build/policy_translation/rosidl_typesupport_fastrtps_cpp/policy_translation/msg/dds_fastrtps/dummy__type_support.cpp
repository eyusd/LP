// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice
#include "policy_translation/msg/dummy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "policy_translation/msg/dummy__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  policy_translation::msg::Dummy & ros_message)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
get_serialized_size(
  const policy_translation::msg::Dummy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
max_serialized_size_Dummy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Dummy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const policy_translation::msg::Dummy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dummy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<policy_translation::msg::Dummy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dummy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const policy_translation::msg::Dummy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dummy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Dummy(full_bounded, 0);
}

static message_type_support_callbacks_t _Dummy__callbacks = {
  "policy_translation::msg",
  "Dummy",
  _Dummy__cdr_serialize,
  _Dummy__cdr_deserialize,
  _Dummy__get_serialized_size,
  _Dummy__max_serialized_size
};

static rosidl_message_type_support_t _Dummy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dummy__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace policy_translation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_policy_translation
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::msg::Dummy>()
{
  return &policy_translation::msg::typesupport_fastrtps_cpp::_Dummy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, msg, Dummy)() {
  return &policy_translation::msg::typesupport_fastrtps_cpp::_Dummy__handle;
}

#ifdef __cplusplus
}
#endif
