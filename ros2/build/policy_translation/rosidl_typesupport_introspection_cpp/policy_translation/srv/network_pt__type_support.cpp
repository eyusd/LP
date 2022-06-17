// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/srv/network_pt__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace policy_translation
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NetworkPT_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) policy_translation::srv::NetworkPT_Request(_init);
}

void NetworkPT_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<policy_translation::srv::NetworkPT_Request *>(message_memory);
  typed_message->~NetworkPT_Request();
}

size_t size_function__NetworkPT_Request__robot(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NetworkPT_Request__robot(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NetworkPT_Request__robot(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__NetworkPT_Request__robot(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NetworkPT_Request_message_member_array[5] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "language",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Request, language),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Request, robot),  // bytes offset in struct
    nullptr,  // default value
    size_function__NetworkPT_Request__robot,  // size() function pointer
    get_const_function__NetworkPT_Request__robot,  // get_const(index) function pointer
    get_function__NetworkPT_Request__robot,  // get(index) function pointer
    resize_function__NetworkPT_Request__robot  // resize(index) function pointer
  },
  {
    "reset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Request, reset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Request, plot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NetworkPT_Request_message_members = {
  "policy_translation::srv",  // message namespace
  "NetworkPT_Request",  // message name
  5,  // number of fields
  sizeof(policy_translation::srv::NetworkPT_Request),
  NetworkPT_Request_message_member_array,  // message members
  NetworkPT_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NetworkPT_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NetworkPT_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NetworkPT_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace policy_translation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::srv::NetworkPT_Request>()
{
  return &::policy_translation::srv::rosidl_typesupport_introspection_cpp::NetworkPT_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, policy_translation, srv, NetworkPT_Request)() {
  return &::policy_translation::srv::rosidl_typesupport_introspection_cpp::NetworkPT_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "policy_translation/srv/network_pt__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace policy_translation
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NetworkPT_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) policy_translation::srv::NetworkPT_Response(_init);
}

void NetworkPT_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<policy_translation::srv::NetworkPT_Response *>(message_memory);
  typed_message->~NetworkPT_Response();
}

size_t size_function__NetworkPT_Response__trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NetworkPT_Response__trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NetworkPT_Response__trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__NetworkPT_Response__trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NetworkPT_Response__confidence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NetworkPT_Response__confidence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NetworkPT_Response__confidence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__NetworkPT_Response__confidence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NetworkPT_Response__weights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NetworkPT_Response__weights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NetworkPT_Response__weights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__NetworkPT_Response__weights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NetworkPT_Response_message_member_array[5] = {
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Response, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__NetworkPT_Response__trajectory,  // size() function pointer
    get_const_function__NetworkPT_Response__trajectory,  // get_const(index) function pointer
    get_function__NetworkPT_Response__trajectory,  // get(index) function pointer
    resize_function__NetworkPT_Response__trajectory  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Response, confidence),  // bytes offset in struct
    nullptr,  // default value
    size_function__NetworkPT_Response__confidence,  // size() function pointer
    get_const_function__NetworkPT_Response__confidence,  // get_const(index) function pointer
    get_function__NetworkPT_Response__confidence,  // get(index) function pointer
    resize_function__NetworkPT_Response__confidence  // resize(index) function pointer
  },
  {
    "timesteps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Response, timesteps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "weights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Response, weights),  // bytes offset in struct
    nullptr,  // default value
    size_function__NetworkPT_Response__weights,  // size() function pointer
    get_const_function__NetworkPT_Response__weights,  // get_const(index) function pointer
    get_function__NetworkPT_Response__weights,  // get(index) function pointer
    resize_function__NetworkPT_Response__weights  // resize(index) function pointer
  },
  {
    "phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation::srv::NetworkPT_Response, phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NetworkPT_Response_message_members = {
  "policy_translation::srv",  // message namespace
  "NetworkPT_Response",  // message name
  5,  // number of fields
  sizeof(policy_translation::srv::NetworkPT_Response),
  NetworkPT_Response_message_member_array,  // message members
  NetworkPT_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NetworkPT_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NetworkPT_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NetworkPT_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace policy_translation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::srv::NetworkPT_Response>()
{
  return &::policy_translation::srv::rosidl_typesupport_introspection_cpp::NetworkPT_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, policy_translation, srv, NetworkPT_Response)() {
  return &::policy_translation::srv::rosidl_typesupport_introspection_cpp::NetworkPT_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "policy_translation/srv/network_pt__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace policy_translation
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NetworkPT_service_members = {
  "policy_translation::srv",  // service namespace
  "NetworkPT",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<policy_translation::srv::NetworkPT>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NetworkPT_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NetworkPT_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace policy_translation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<policy_translation::srv::NetworkPT>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::policy_translation::srv::rosidl_typesupport_introspection_cpp::NetworkPT_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::policy_translation::srv::NetworkPT_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::policy_translation::srv::NetworkPT_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, policy_translation, srv, NetworkPT)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<policy_translation::srv::NetworkPT>();
}

#ifdef __cplusplus
}
#endif
