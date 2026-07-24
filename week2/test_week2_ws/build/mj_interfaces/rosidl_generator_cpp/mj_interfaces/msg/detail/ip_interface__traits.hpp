// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__TRAITS_HPP_
#define MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mj_interfaces/msg/detail/ip_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'omega'
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mj_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IpInterface & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: omega
  {
    out << "omega: ";
    to_flow_style_yaml(msg.omega, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    to_flow_style_yaml(msg.torque, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IpInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega:\n";
    to_block_style_yaml(msg.omega, out, indentation + 2);
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_block_style_yaml(msg.torque, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IpInterface & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mj_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mj_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mj_interfaces::msg::IpInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  mj_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mj_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mj_interfaces::msg::IpInterface & msg)
{
  return mj_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mj_interfaces::msg::IpInterface>()
{
  return "mj_interfaces::msg::IpInterface";
}

template<>
inline const char * name<mj_interfaces::msg::IpInterface>()
{
  return "mj_interfaces/msg/IpInterface";
}

template<>
struct has_fixed_size<mj_interfaces::msg::IpInterface>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<mj_interfaces::msg::IpInterface>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<mj_interfaces::msg::IpInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__TRAITS_HPP_
