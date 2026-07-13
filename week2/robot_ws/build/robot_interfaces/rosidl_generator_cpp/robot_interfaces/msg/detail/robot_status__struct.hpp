// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'control'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'stable'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__RobotStatus __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init),
    pose(_init),
    twist(_init),
    control(_init),
    stable(_init)
  {
    (void)_init;
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    control(_alloc, _init),
    stable(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _time_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _time_type time;
  using _pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _control_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _control_type control;
  using _stable_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _stable_type stable;

  // setters for named parameter idiom
  Type & set__time(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__control(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->control = _arg;
    return *this;
  }
  Type & set__stable(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->stable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__RobotStatus
    std::shared_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__RobotStatus
    std::shared_ptr<robot_interfaces::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    if (this->stable != other.stable) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  robot_interfaces::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
