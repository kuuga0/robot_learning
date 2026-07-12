// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_stable
{
public:
  explicit Init_RobotStatus_stable(::robot_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::RobotStatus stable(::robot_interfaces::msg::RobotStatus::_stable_type arg)
  {
    msg_.stable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_control
{
public:
  explicit Init_RobotStatus_control(::robot_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_stable control(::robot_interfaces::msg::RobotStatus::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_RobotStatus_stable(msg_);
  }

private:
  ::robot_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_twist
{
public:
  explicit Init_RobotStatus_twist(::robot_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_control twist(::robot_interfaces::msg::RobotStatus::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_RobotStatus_control(msg_);
  }

private:
  ::robot_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::robot_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_twist pose(::robot_interfaces::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotStatus_twist(msg_);
  }

private:
  ::robot_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_stamp
{
public:
  Init_RobotStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_pose stamp(::robot_interfaces::msg::RobotStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::robot_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::RobotStatus>()
{
  return robot_interfaces::msg::builder::Init_RobotStatus_stamp();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
