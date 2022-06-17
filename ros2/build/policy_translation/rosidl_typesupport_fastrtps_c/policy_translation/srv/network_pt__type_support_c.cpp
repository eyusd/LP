// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice
#include "policy_translation/srv/network_pt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "policy_translation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "policy_translation/srv/network_pt__struct.h"
#include "policy_translation/srv/network_pt__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // robot
#include "rosidl_generator_c/primitives_sequence_functions.h"  // robot
#include "rosidl_generator_c/string.h"  // language
#include "rosidl_generator_c/string_functions.h"  // language
#include "sensor_msgs/msg/image__functions.h"  // image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_policy_translation
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_policy_translation
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _NetworkPT_Request__ros_msg_type = policy_translation__srv__NetworkPT_Request;

static bool _NetworkPT_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NetworkPT_Request__ros_msg_type * ros_message = static_cast<const _NetworkPT_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image, cdr))
    {
      return false;
    }
  }

  // Field name: language
  {
    const rosidl_generator_c__String * str = &ros_message->language;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: robot
  {
    size_t size = ros_message->robot.size;
    auto array_ptr = ros_message->robot.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reset
  {
    cdr << (ros_message->reset ? true : false);
  }

  // Field name: plot
  {
    cdr << (ros_message->plot ? true : false);
  }

  return true;
}

static bool _NetworkPT_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NetworkPT_Request__ros_msg_type * ros_message = static_cast<_NetworkPT_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image))
    {
      return false;
    }
  }

  // Field name: language
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->language.data) {
      rosidl_generator_c__String__init(&ros_message->language);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->language,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'language'\n");
      return false;
    }
  }

  // Field name: robot
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->robot);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->robot, size)) {
      return "failed to create array for field 'robot'";
    }
    auto array_ptr = ros_message->robot.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset = tmp ? true : false;
  }

  // Field name: plot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plot = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t get_serialized_size_policy_translation__srv__NetworkPT_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NetworkPT_Request__ros_msg_type * ros_message = static_cast<const _NetworkPT_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);
  // field.name language
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->language.size + 1);
  // field.name robot
  {
    size_t array_size = ros_message->robot.size;
    auto array_ptr = ros_message->robot.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset
  {
    size_t item_size = sizeof(ros_message->reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plot
  {
    size_t item_size = sizeof(ros_message->plot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NetworkPT_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_policy_translation__srv__NetworkPT_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t max_serialized_size_policy_translation__srv__NetworkPT_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }
  // member: language
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: robot
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NetworkPT_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_policy_translation__srv__NetworkPT_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NetworkPT_Request = {
  "policy_translation::srv",
  "NetworkPT_Request",
  _NetworkPT_Request__cdr_serialize,
  _NetworkPT_Request__cdr_deserialize,
  _NetworkPT_Request__get_serialized_size,
  _NetworkPT_Request__max_serialized_size
};

static rosidl_message_type_support_t _NetworkPT_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NetworkPT_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, NetworkPT_Request)() {
  return &_NetworkPT_Request__type_support;
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
// #include "policy_translation/srv/network_pt__struct.h"
// already included above
// #include "policy_translation/srv/network_pt__functions.h"
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

// already included above
// #include "rosidl_generator_c/primitives_sequence.h"  // confidence, trajectory, weights
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // confidence, trajectory, weights

// forward declare type support functions


using _NetworkPT_Response__ros_msg_type = policy_translation__srv__NetworkPT_Response;

static bool _NetworkPT_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NetworkPT_Response__ros_msg_type * ros_message = static_cast<const _NetworkPT_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    size_t size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: confidence
  {
    size_t size = ros_message->confidence.size;
    auto array_ptr = ros_message->confidence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: timesteps
  {
    cdr << ros_message->timesteps;
  }

  // Field name: weights
  {
    size_t size = ros_message->weights.size;
    auto array_ptr = ros_message->weights.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: phase
  {
    cdr << ros_message->phase;
  }

  return true;
}

static bool _NetworkPT_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NetworkPT_Response__ros_msg_type * ros_message = static_cast<_NetworkPT_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->trajectory.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->trajectory);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->trajectory, size)) {
      return "failed to create array for field 'trajectory'";
    }
    auto array_ptr = ros_message->trajectory.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: confidence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->confidence.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->confidence);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->confidence, size)) {
      return "failed to create array for field 'confidence'";
    }
    auto array_ptr = ros_message->confidence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: timesteps
  {
    cdr >> ros_message->timesteps;
  }

  // Field name: weights
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->weights.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->weights);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->weights, size)) {
      return "failed to create array for field 'weights'";
    }
    auto array_ptr = ros_message->weights.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: phase
  {
    cdr >> ros_message->phase;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t get_serialized_size_policy_translation__srv__NetworkPT_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NetworkPT_Response__ros_msg_type * ros_message = static_cast<const _NetworkPT_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory
  {
    size_t array_size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t array_size = ros_message->confidence.size;
    auto array_ptr = ros_message->confidence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timesteps
  {
    size_t item_size = sizeof(ros_message->timesteps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weights
  {
    size_t array_size = ros_message->weights.size;
    auto array_ptr = ros_message->weights.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name phase
  {
    size_t item_size = sizeof(ros_message->phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NetworkPT_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_policy_translation__srv__NetworkPT_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_policy_translation
size_t max_serialized_size_policy_translation__srv__NetworkPT_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: confidence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timesteps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weights
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: phase
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NetworkPT_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_policy_translation__srv__NetworkPT_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NetworkPT_Response = {
  "policy_translation::srv",
  "NetworkPT_Response",
  _NetworkPT_Response__cdr_serialize,
  _NetworkPT_Response__cdr_deserialize,
  _NetworkPT_Response__get_serialized_size,
  _NetworkPT_Response__max_serialized_size
};

static rosidl_message_type_support_t _NetworkPT_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NetworkPT_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, NetworkPT_Response)() {
  return &_NetworkPT_Response__type_support;
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
#include "policy_translation/srv/network_pt.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NetworkPT__callbacks = {
  "policy_translation::srv",
  "NetworkPT",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, NetworkPT_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, NetworkPT_Response)(),
};

static rosidl_service_type_support_t NetworkPT__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NetworkPT__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, srv, NetworkPT)() {
  return &NetworkPT__handle;
}

#if defined(__cplusplus)
}
#endif
