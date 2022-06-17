// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__MSG__DUMMY__TRAITS_HPP_
#define POLICY_TRANSLATION__MSG__DUMMY__TRAITS_HPP_

#include "policy_translation/msg/dummy__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<policy_translation::msg::Dummy>()
{
  return "policy_translation::msg::Dummy";
}

template<>
struct has_fixed_size<policy_translation::msg::Dummy>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<policy_translation::msg::Dummy>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<policy_translation::msg::Dummy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POLICY_TRANSLATION__MSG__DUMMY__TRAITS_HPP_
