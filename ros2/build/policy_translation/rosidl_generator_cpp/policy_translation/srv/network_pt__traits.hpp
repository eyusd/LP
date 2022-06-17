// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__SRV__NETWORK_PT__TRAITS_HPP_
#define POLICY_TRANSLATION__SRV__NETWORK_PT__TRAITS_HPP_

#include "policy_translation/srv/network_pt__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::NetworkPT_Request>()
{
  return "policy_translation::srv::NetworkPT_Request";
}

template<>
struct has_fixed_size<policy_translation::srv::NetworkPT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<policy_translation::srv::NetworkPT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<policy_translation::srv::NetworkPT_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::NetworkPT_Response>()
{
  return "policy_translation::srv::NetworkPT_Response";
}

template<>
struct has_fixed_size<policy_translation::srv::NetworkPT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<policy_translation::srv::NetworkPT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<policy_translation::srv::NetworkPT_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::NetworkPT>()
{
  return "policy_translation::srv::NetworkPT";
}

template<>
struct has_fixed_size<policy_translation::srv::NetworkPT>
  : std::integral_constant<
    bool,
    has_fixed_size<policy_translation::srv::NetworkPT_Request>::value &&
    has_fixed_size<policy_translation::srv::NetworkPT_Response>::value
  >
{
};

template<>
struct has_bounded_size<policy_translation::srv::NetworkPT>
  : std::integral_constant<
    bool,
    has_bounded_size<policy_translation::srv::NetworkPT_Request>::value &&
    has_bounded_size<policy_translation::srv::NetworkPT_Response>::value
  >
{
};

template<>
struct is_service<policy_translation::srv::NetworkPT>
  : std::true_type
{
};

template<>
struct is_service_request<policy_translation::srv::NetworkPT_Request>
  : std::true_type
{
};

template<>
struct is_service_response<policy_translation::srv::NetworkPT_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // POLICY_TRANSLATION__SRV__NETWORK_PT__TRAITS_HPP_
