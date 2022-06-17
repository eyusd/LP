// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "policy_translation/srv/network_pt__rosidl_typesupport_introspection_c.h"
#include "policy_translation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "policy_translation/srv/network_pt__functions.h"
#include "policy_translation/srv/network_pt__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"
// Member `language`
#include "rosidl_generator_c/string_functions.h"
// Member `robot`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  policy_translation__srv__NetworkPT_Request__init(message_memory);
}

void NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_fini_function(void * message_memory)
{
  policy_translation__srv__NetworkPT_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_member_array[5] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "language",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Request, language),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Request, robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Request, reset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Request, plot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_members = {
  "policy_translation__srv",  // message namespace
  "NetworkPT_Request",  // message name
  5,  // number of fields
  sizeof(policy_translation__srv__NetworkPT_Request),
  NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_member_array,  // message members
  NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_type_support_handle = {
  0,
  &NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_policy_translation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Request)() {
  NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_type_support_handle.typesupport_identifier) {
    NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NetworkPT_Request__rosidl_typesupport_introspection_c__NetworkPT_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "policy_translation/srv/network_pt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "policy_translation/srv/network_pt__functions.h"
// already included above
// #include "policy_translation/srv/network_pt__struct.h"


// Include directives for member types
// Member `trajectory`
// Member `confidence`
// Member `weights`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  policy_translation__srv__NetworkPT_Response__init(message_memory);
}

void NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_fini_function(void * message_memory)
{
  policy_translation__srv__NetworkPT_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_member_array[5] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Response, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Response, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timesteps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Response, timesteps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Response, weights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(policy_translation__srv__NetworkPT_Response, phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_members = {
  "policy_translation__srv",  // message namespace
  "NetworkPT_Response",  // message name
  5,  // number of fields
  sizeof(policy_translation__srv__NetworkPT_Response),
  NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_member_array,  // message members
  NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_type_support_handle = {
  0,
  &NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_policy_translation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Response)() {
  if (!NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_type_support_handle.typesupport_identifier) {
    NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NetworkPT_Response__rosidl_typesupport_introspection_c__NetworkPT_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "policy_translation/srv/network_pt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_members = {
  "policy_translation__srv",  // service namespace
  "NetworkPT",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_Request_message_type_support_handle,
  NULL  // response message
  // policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_Response_message_type_support_handle
};

static rosidl_service_type_support_t policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_type_support_handle = {
  0,
  &policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_policy_translation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT)() {
  if (!policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_type_support_handle.typesupport_identifier) {
    policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, srv, NetworkPT_Response)()->data;
  }

  return &policy_translation__srv__network_pt__rosidl_typesupport_introspection_c__NetworkPT_service_type_support_handle;
}
