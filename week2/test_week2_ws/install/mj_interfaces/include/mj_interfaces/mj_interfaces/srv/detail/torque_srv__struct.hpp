// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_HPP_
#define MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mj_interfaces__srv__TorqueSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__mj_interfaces__srv__TorqueSrv_Request __declspec(deprecated)
#endif

namespace mj_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TorqueSrv_Request_
{
  using Type = TorqueSrv_Request_<ContainerAllocator>;

  explicit TorqueSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torque(_init)
  {
    (void)_init;
  }

  explicit TorqueSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torque(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mj_interfaces__srv__TorqueSrv_Request
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mj_interfaces__srv__TorqueSrv_Request
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TorqueSrv_Request_ & other) const
  {
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const TorqueSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TorqueSrv_Request_

// alias to use template instance with default allocator
using TorqueSrv_Request =
  mj_interfaces::srv::TorqueSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mj_interfaces


#ifndef _WIN32
# define DEPRECATED__mj_interfaces__srv__TorqueSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__mj_interfaces__srv__TorqueSrv_Response __declspec(deprecated)
#endif

namespace mj_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TorqueSrv_Response_
{
  using Type = TorqueSrv_Response_<ContainerAllocator>;

  explicit TorqueSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit TorqueSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mj_interfaces__srv__TorqueSrv_Response
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mj_interfaces__srv__TorqueSrv_Response
    std::shared_ptr<mj_interfaces::srv::TorqueSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TorqueSrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TorqueSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TorqueSrv_Response_

// alias to use template instance with default allocator
using TorqueSrv_Response =
  mj_interfaces::srv::TorqueSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mj_interfaces

namespace mj_interfaces
{

namespace srv
{

struct TorqueSrv
{
  using Request = mj_interfaces::srv::TorqueSrv_Request;
  using Response = mj_interfaces::srv::TorqueSrv_Response;
};

}  // namespace srv

}  // namespace mj_interfaces

#endif  // MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_HPP_
