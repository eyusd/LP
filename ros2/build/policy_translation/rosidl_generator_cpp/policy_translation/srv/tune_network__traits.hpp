// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from policy_translation:srv/TuneNetwork.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__SRV__TUNE_NETWORK__TRAITS_HPP_
#define POLICY_TRANSLATION__SRV__TUNE_NETWORK__TRAITS_HPP_

#include "policy_translation/srv/tune_network__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::TuneNetwork_Request>()
{
  return "policy_translation::srv::TuneNetwork_Request";
}

template<>
struct has_fixed_size<policy_translation::srv::TuneNetwork_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<policy_translation::srv::TuneNetwork_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<policy_translation::srv::TuneNetwork_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::TuneNetwork_Response>()
{
  return "policy_translation::srv::TuneNetwork_Response";
}

template<>
struct has_fixed_size<policy_translation::srv::TuneNetwork_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<policy_translation::srv::TuneNetwork_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<policy_translation::srv::TuneNetwork_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::srv::TuneNetwork>()
{
  return "policy_translation::srv::TuneNetwork";
}

template<>
struct has_fixed_size<policy_translation::srv::TuneNetwork>
  : std::integral_constant<
    bool,
    has_fixed_size<policy_translation::srv::TuneNetwork_Request>::value &&
    has_fixed_size<policy_translation::srv::TuneNetwork_Response>::value
  >
{
};

template<>
struct has_bounded_size<policy_translation::srv::TuneNetwork>
  : std::integral_constant<
    bool,
    has_bounded_size<policy_translation::srv::TuneNetwork_Request>::value &&
    has_bounded_size<policy_translation::srv::TuneNetwork_Response>::value
  >
{
};

template<>
struct is_service<policy_translation::srv::TuneNetwork>
  : std::true_type
{
};

template<>
struct is_service_request<policy_translation::srv::TuneNetwork_Request>
  : std::true_type
{
};

template<>
struct is_service_response<policy_translation::srv::TuneNetwork_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // POLICY_TRANSLATION__SRV__TUNE_NETWORK__TRAITS_HPP_
