// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice
#include "policy_translation/srv/network_pt__rosidl_typesupport_fastrtps_cpp.hpp"
#include "policy_translation/srv/network_pt__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_serialize(
  const policy_translation::srv::NetworkPT_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image,
    cdr);
  // Member: language
  cdr << ros_message.language;
  // Member: robot
  {
    cdr << ros_message.robot;
  }
  // Member: reset
  cdr << (ros_message.reset ? true : false);
  // Member: plot
  cdr << (ros_message.plot ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  policy_translation::srv::NetworkPT_Request & ros_message)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image);

  // Member: language
  cdr >> ros_message.language;

  // Member: robot
  {
    cdr >> ros_message.robot;
  }

  // Member: reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reset = tmp ? true : false;
  }

  // Member: plot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plot = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
get_serialized_size(
  const policy_translation::srv::NetworkPT_Request & ros_message,
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
  // Member: language
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.language.size() + 1);
  // Member: robot
  {
    size_t array_size = ros_message.robot.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.robot[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset
  {
    size_t item_size = sizeof(ros_message.reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plot
  {
    size_t item_size = sizeof(ros_message.plot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
max_serialized_size_NetworkPT_Request(
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

  // Member: language
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: robot
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NetworkPT_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const policy_translation::srv::NetworkPT_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NetworkPT_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<policy_translation::srv::NetworkPT_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NetworkPT_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const policy_translation::srv::NetworkPT_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NetworkPT_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NetworkPT_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _NetworkPT_Request__callbacks = {
  "policy_translation::srv",
  "NetworkPT_Request",
  _NetworkPT_Request__cdr_serialize,
  _NetworkPT_Request__cdr_deserialize,
  _NetworkPT_Request__get_serialized_size,
  _NetworkPT_Request__max_serialized_size
};

static rosidl_message_type_support_t _NetworkPT_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NetworkPT_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace policy_translation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_policy_translation
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::srv::NetworkPT_Request>()
{
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, srv, NetworkPT_Request)() {
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace policy_translation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_serialize(
  const policy_translation::srv::NetworkPT_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory
  {
    cdr << ros_message.trajectory;
  }
  // Member: confidence
  {
    cdr << ros_message.confidence;
  }
  // Member: timesteps
  cdr << ros_message.timesteps;
  // Member: weights
  {
    cdr << ros_message.weights;
  }
  // Member: phase
  cdr << ros_message.phase;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  policy_translation::srv::NetworkPT_Response & ros_message)
{
  // Member: trajectory
  {
    cdr >> ros_message.trajectory;
  }

  // Member: confidence
  {
    cdr >> ros_message.confidence;
  }

  // Member: timesteps
  cdr >> ros_message.timesteps;

  // Member: weights
  {
    cdr >> ros_message.weights;
  }

  // Member: phase
  cdr >> ros_message.phase;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
get_serialized_size(
  const policy_translation::srv::NetworkPT_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory
  {
    size_t array_size = ros_message.trajectory.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.trajectory[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence
  {
    size_t array_size = ros_message.confidence.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.confidence[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timesteps
  {
    size_t item_size = sizeof(ros_message.timesteps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: weights
  {
    size_t array_size = ros_message.weights.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.weights[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: phase
  {
    size_t item_size = sizeof(ros_message.phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_policy_translation
max_serialized_size_NetworkPT_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectory
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: confidence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timesteps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: weights
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: phase
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NetworkPT_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const policy_translation::srv::NetworkPT_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NetworkPT_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<policy_translation::srv::NetworkPT_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NetworkPT_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const policy_translation::srv::NetworkPT_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NetworkPT_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NetworkPT_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _NetworkPT_Response__callbacks = {
  "policy_translation::srv",
  "NetworkPT_Response",
  _NetworkPT_Response__cdr_serialize,
  _NetworkPT_Response__cdr_deserialize,
  _NetworkPT_Response__get_serialized_size,
  _NetworkPT_Response__max_serialized_size
};

static rosidl_message_type_support_t _NetworkPT_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NetworkPT_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace policy_translation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_policy_translation
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::srv::NetworkPT_Response>()
{
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, srv, NetworkPT_Response)() {
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace policy_translation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _NetworkPT__callbacks = {
  "policy_translation::srv",
  "NetworkPT",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, srv, NetworkPT_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, srv, NetworkPT_Response)(),
};

static rosidl_service_type_support_t _NetworkPT__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NetworkPT__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace policy_translation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_policy_translation
const rosidl_service_type_support_t *
get_service_type_support_handle<policy_translation::srv::NetworkPT>()
{
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, policy_translation, srv, NetworkPT)() {
  return &policy_translation::srv::typesupport_fastrtps_cpp::_NetworkPT__handle;
}

#ifdef __cplusplus
}
#endif
