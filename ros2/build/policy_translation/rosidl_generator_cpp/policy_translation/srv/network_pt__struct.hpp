// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from policy_translation:srv/NetworkPT.idl
// generated code does not contain a copyright notice

#ifndef POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_HPP_
#define POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_HPP_

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
# define DEPRECATED__policy_translation__srv__NetworkPT_Request __attribute__((deprecated))
#else
# define DEPRECATED__policy_translation__srv__NetworkPT_Request __declspec(deprecated)
#endif

namespace policy_translation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NetworkPT_Request_
{
  using Type = NetworkPT_Request_<ContainerAllocator>;

  explicit NetworkPT_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->language = "";
      this->reset = false;
      this->plot = false;
    }
  }

  explicit NetworkPT_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    language(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->language = "";
      this->reset = false;
      this->plot = false;
    }
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _language_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _language_type language;
  using _robot_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _robot_type robot;
  using _reset_type =
    bool;
  _reset_type reset;
  using _plot_type =
    bool;
  _plot_type plot;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__language(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->language = _arg;
    return *this;
  }
  Type & set__robot(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->robot = _arg;
    return *this;
  }
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }
  Type & set__plot(
    const bool & _arg)
  {
    this->plot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    policy_translation::srv::NetworkPT_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const policy_translation::srv::NetworkPT_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      policy_translation::srv::NetworkPT_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      policy_translation::srv::NetworkPT_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__policy_translation__srv__NetworkPT_Request
    std::shared_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__policy_translation__srv__NetworkPT_Request
    std::shared_ptr<policy_translation::srv::NetworkPT_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkPT_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->language != other.language) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    if (this->reset != other.reset) {
      return false;
    }
    if (this->plot != other.plot) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkPT_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkPT_Request_

// alias to use template instance with default allocator
using NetworkPT_Request =
  policy_translation::srv::NetworkPT_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace policy_translation


#ifndef _WIN32
# define DEPRECATED__policy_translation__srv__NetworkPT_Response __attribute__((deprecated))
#else
# define DEPRECATED__policy_translation__srv__NetworkPT_Response __declspec(deprecated)
#endif

namespace policy_translation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NetworkPT_Response_
{
  using Type = NetworkPT_Response_<ContainerAllocator>;

  explicit NetworkPT_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timesteps = 0l;
      this->phase = 0.0f;
    }
  }

  explicit NetworkPT_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timesteps = 0l;
      this->phase = 0.0f;
    }
  }

  // field types and members
  using _trajectory_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _trajectory_type trajectory;
  using _confidence_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _confidence_type confidence;
  using _timesteps_type =
    int32_t;
  _timesteps_type timesteps;
  using _weights_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _weights_type weights;
  using _phase_type =
    float;
  _phase_type phase;

  // setters for named parameter idiom
  Type & set__trajectory(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__confidence(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__timesteps(
    const int32_t & _arg)
  {
    this->timesteps = _arg;
    return *this;
  }
  Type & set__weights(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->weights = _arg;
    return *this;
  }
  Type & set__phase(
    const float & _arg)
  {
    this->phase = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    policy_translation::srv::NetworkPT_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const policy_translation::srv::NetworkPT_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      policy_translation::srv::NetworkPT_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      policy_translation::srv::NetworkPT_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__policy_translation__srv__NetworkPT_Response
    std::shared_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__policy_translation__srv__NetworkPT_Response
    std::shared_ptr<policy_translation::srv::NetworkPT_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkPT_Response_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->timesteps != other.timesteps) {
      return false;
    }
    if (this->weights != other.weights) {
      return false;
    }
    if (this->phase != other.phase) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkPT_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkPT_Response_

// alias to use template instance with default allocator
using NetworkPT_Response =
  policy_translation::srv::NetworkPT_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace policy_translation

namespace policy_translation
{

namespace srv
{

struct NetworkPT
{
  using Request = policy_translation::srv::NetworkPT_Request;
  using Response = policy_translation::srv::NetworkPT_Response;
};

}  // namespace srv

}  // namespace policy_translation

#endif  // POLICY_TRANSLATION__SRV__NETWORK_PT__STRUCT_HPP_
