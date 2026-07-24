// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__BUILDER_HPP_
#define MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mj_interfaces/srv/detail/torque_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mj_interfaces
{

namespace srv
{

namespace builder
{

class Init_TorqueSrv_Request_torque
{
public:
  Init_TorqueSrv_Request_torque()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mj_interfaces::srv::TorqueSrv_Request torque(::mj_interfaces::srv::TorqueSrv_Request::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mj_interfaces::srv::TorqueSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mj_interfaces::srv::TorqueSrv_Request>()
{
  return mj_interfaces::srv::builder::Init_TorqueSrv_Request_torque();
}

}  // namespace mj_interfaces


namespace mj_interfaces
{

namespace srv
{

namespace builder
{

class Init_TorqueSrv_Response_message
{
public:
  explicit Init_TorqueSrv_Response_message(::mj_interfaces::srv::TorqueSrv_Response & msg)
  : msg_(msg)
  {}
  ::mj_interfaces::srv::TorqueSrv_Response message(::mj_interfaces::srv::TorqueSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mj_interfaces::srv::TorqueSrv_Response msg_;
};

class Init_TorqueSrv_Response_success
{
public:
  Init_TorqueSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TorqueSrv_Response_message success(::mj_interfaces::srv::TorqueSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TorqueSrv_Response_message(msg_);
  }

private:
  ::mj_interfaces::srv::TorqueSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mj_interfaces::srv::TorqueSrv_Response>()
{
  return mj_interfaces::srv::builder::Init_TorqueSrv_Response_success();
}

}  // namespace mj_interfaces

#endif  // MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__BUILDER_HPP_
