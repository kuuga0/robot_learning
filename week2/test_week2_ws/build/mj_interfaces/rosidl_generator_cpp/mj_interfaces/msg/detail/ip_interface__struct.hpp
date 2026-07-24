// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_HPP_
#define MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'omega'
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mj_interfaces__msg__IpInterface __attribute__((deprecated))
#else
# define DEPRECATED__mj_interfaces__msg__IpInterface __declspec(deprecated)
#endif

namespace mj_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IpInterface_
{
  using Type = IpInterface_<ContainerAllocator>;

  explicit IpInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    omega(_init),
    torque(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
    }
  }

  explicit IpInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    omega(_alloc, _init),
    torque(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _theta_type =
    double;
  _theta_type theta;
  using _omega_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _omega_type omega;
  using _torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__omega(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->omega = _arg;
    return *this;
  }
  Type & set__torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mj_interfaces::msg::IpInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const mj_interfaces::msg::IpInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::msg::IpInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::msg::IpInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mj_interfaces__msg__IpInterface
    std::shared_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mj_interfaces__msg__IpInterface
    std::shared_ptr<mj_interfaces::msg::IpInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IpInterface_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const IpInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IpInterface_

// alias to use template instance with default allocator
using IpInterface =
  mj_interfaces::msg::IpInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mj_interfaces

#endif  // MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__STRUCT_HPP_
