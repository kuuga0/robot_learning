// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/TorqueSet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/torque_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_TorqueSet_Request_torque
{
public:
  Init_TorqueSet_Request_torque()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::srv::TorqueSet_Request torque(::robot_interfaces::srv::TorqueSet_Request::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::TorqueSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::TorqueSet_Request>()
{
  return robot_interfaces::srv::builder::Init_TorqueSet_Request_torque();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_TorqueSet_Response_msg
{
public:
  explicit Init_TorqueSet_Response_msg(::robot_interfaces::srv::TorqueSet_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::TorqueSet_Response msg(::robot_interfaces::srv::TorqueSet_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::TorqueSet_Response msg_;
};

class Init_TorqueSet_Response_success
{
public:
  Init_TorqueSet_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TorqueSet_Response_msg success(::robot_interfaces::srv::TorqueSet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TorqueSet_Response_msg(msg_);
  }

private:
  ::robot_interfaces::srv::TorqueSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::TorqueSet_Response>()
{
  return robot_interfaces::srv::builder::Init_TorqueSet_Response_success();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__BUILDER_HPP_
