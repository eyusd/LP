// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__MSG__DUMMY__STRUCT_HPP_
#define POLICY_TRANSLATION__MSG__DUMMY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__policy_translation__msg__Dummy __attribute__((deprecated))
#else
# define DEPRECATED__policy_translation__msg__Dummy __declspec(deprecated)
#endif

namespace policy_translation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dummy_
{
  using Type = Dummy_<ContainerAllocator>;

  explicit Dummy_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit Dummy_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    policy_translation::msg::Dummy_<ContainerAllocator> *;
  using ConstRawPtr =
    const policy_translation::msg::Dummy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<policy_translation::msg::Dummy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<policy_translation::msg::Dummy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      policy_translation::msg::Dummy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<policy_translation::msg::Dummy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      policy_translation::msg::Dummy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<policy_translation::msg::Dummy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<policy_translation::msg::Dummy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<policy_translation::msg::Dummy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__policy_translation__msg__Dummy
    std::shared_ptr<policy_translation::msg::Dummy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__policy_translation__msg__Dummy
    std::shared_ptr<policy_translation::msg::Dummy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dummy_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dummy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dummy_

// alias to use template instance with default allocator
using Dummy =
  policy_translation::msg::Dummy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace policy_translation

#endif  // POLICY_TRANSLATION__MSG__DUMMY__STRUCT_HPP_
