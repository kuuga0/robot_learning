// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__BUILDER_HPP_
#define MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mj_interfaces/msg/detail/ip_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mj_interfaces
{

namespace msg
{

namespace builder
{

class Init_IpInterface_position
{
public:
  explicit Init_IpInterface_position(::mj_interfaces::msg::IpInterface & msg)
  : msg_(msg)
  {}
  ::mj_interfaces::msg::IpInterface position(::mj_interfaces::msg::IpInterface::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mj_interfaces::msg::IpInterface msg_;
};

class Init_IpInterface_torque
{
public:
  explicit Init_IpInterface_torque(::mj_interfaces::msg::IpInterface & msg)
  : msg_(msg)
  {}
  Init_IpInterface_position torque(::mj_interfaces::msg::IpInterface::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_IpInterface_position(msg_);
  }

private:
  ::mj_interfaces::msg::IpInterface msg_;
};

class Init_IpInterface_omega
{
public:
  explicit Init_IpInterface_omega(::mj_interfaces::msg::IpInterface & msg)
  : msg_(msg)
  {}
  Init_IpInterface_torque omega(::mj_interfaces::msg::IpInterface::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_IpInterface_torque(msg_);
  }

private:
  ::mj_interfaces::msg::IpInterface msg_;
};

class Init_IpInterface_theta
{
public:
  explicit Init_IpInterface_theta(::mj_interfaces::msg::IpInterface & msg)
  : msg_(msg)
  {}
  Init_IpInterface_omega theta(::mj_interfaces::msg::IpInterface::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_IpInterface_omega(msg_);
  }

private:
  ::mj_interfaces::msg::IpInterface msg_;
};

class Init_IpInterface_stamp
{
public:
  Init_IpInterface_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IpInterface_theta stamp(::mj_interfaces::msg::IpInterface::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IpInterface_theta(msg_);
  }

private:
  ::mj_interfaces::msg::IpInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mj_interfaces::msg::IpInterface>()
{
  return mj_interfaces::msg::builder::Init_IpInterface_stamp();
}

}  // namespace mj_interfaces

#endif  // MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__BUILDER_HPP_
