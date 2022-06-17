// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from policy_translation:srv/TuneNetwork.idl
// generated code does not contain a copyright notice
#include "policy_translation/srv/tune_network__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "policy_translation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "policy_translation/srv/tune_network__struct.h"
#include "policy_translation/srv/tune_network__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TuneNetwork_Request__ros_msg_type = policy_translation__srv__TuneNetwork_Request;

static bool _TuneNetwork_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TuneNetwork_Request__ros_msg_type * ros_message = static_cast<const _TuneNetwork_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: epochs
  {
    cdr << ros_message->epochs;
  }

  return true;
}

static bool _TuneNetwork_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TuneNetwork_Request__ros_msg_type * ros_message = static_cast<_TuneNetwork_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: epochs
  {
    cdr >> ros_message->epochs;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t get_serialized_size_policy_translation__srv__TuneNetwork_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TuneNetwork_Request__ros_msg_type * ros_message = static_cast<const _TuneNetwork_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name epochs
  {
    size_t item_size = sizeof(ros_message->epochs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TuneNetwork_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_policy_translation__srv__TuneNetwork_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t max_serialized_size_policy_translation__srv__TuneNetwork_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: epochs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TuneNetwork_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_policy_translation__srv__TuneNetwork_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TuneNetwork_Request = {
  "policy_translation::srv",
  "TuneNetwork_Request",
  _TuneNetwork_Request__cdr_serialize,
  _TuneNetwork_Request__cdr_deserialize,
  _TuneNetwork_Request__get_serialized_size,
  _TuneNetwork_Request__max_serialized_size
};

static rosidl_message_type_support_t _TuneNetwork_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TuneNetwork_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, TuneNetwork_Request)() {
  return &_TuneNetwork_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "policy_translation/srv/tune_network__struct.h"
// already included above
// #include "policy_translation/srv/tune_network__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TuneNetwork_Response__ros_msg_type = policy_translation__srv__TuneNetwork_Response;

static bool _TuneNetwork_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TuneNetwork_Response__ros_msg_type * ros_message = static_cast<const _TuneNetwork_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _TuneNetwork_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TuneNetwork_Response__ros_msg_type * ros_message = static_cast<_TuneNetwork_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t get_serialized_size_policy_translation__srv__TuneNetwork_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TuneNetwork_Response__ros_msg_type * ros_message = static_cast<const _TuneNetwork_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TuneNetwork_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_policy_translation__srv__TuneNetwork_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t max_serialized_size_policy_translation__srv__TuneNetwork_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TuneNetwork_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_policy_translation__srv__TuneNetwork_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TuneNetwork_Response = {
  "policy_translation::srv",
  "TuneNetwork_Response",
  _TuneNetwork_Response__cdr_serialize,
  _TuneNetwork_Response__cdr_deserialize,
  _TuneNetwork_Response__get_serialized_size,
  _TuneNetwork_Response__max_serialized_size
};

static rosidl_message_type_support_t _TuneNetwork_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TuneNetwork_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, TuneNetwork_Response)() {
  return &_TuneNetwork_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "policy_translation/srv/tune_network.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TuneNetwork__callbacks = {
  "policy_translation::srv",
  "TuneNetwork",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, TuneNetwork_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, TuneNetwork_Response)(),
};

static rosidl_service_type_support_t TuneNetwork__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TuneNetwork__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, TuneNetwork)() {
  return &TuneNetwork__handle;
}

#if defined(__cplusplus)
}
#endif
