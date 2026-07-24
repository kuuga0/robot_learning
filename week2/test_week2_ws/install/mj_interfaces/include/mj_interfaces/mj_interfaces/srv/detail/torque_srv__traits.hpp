// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__TRAITS_HPP_
#define MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mj_interfaces/srv/detail/torque_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mj_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TorqueSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: torque
  {
    out << "torque: ";
    to_flow_style_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TorqueSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_block_style_yaml(msg.torque, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TorqueSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mj_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mj_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mj_interfaces::srv::TorqueSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mj_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mj_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mj_interfaces::srv::TorqueSrv_Request & msg)
{
  return mj_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mj_interfaces::srv::TorqueSrv_Request>()
{
  return "mj_interfaces::srv::TorqueSrv_Request";
}

template<>
inline const char * name<mj_interfaces::srv::TorqueSrv_Request>()
{
  return "mj_interfaces/srv/TorqueSrv_Request";
}

template<>
struct has_fixed_size<mj_interfaces::srv::TorqueSrv_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<mj_interfaces::srv::TorqueSrv_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<mj_interfaces::srv::TorqueSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mj_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TorqueSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TorqueSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TorqueSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mj_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mj_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mj_interfaces::srv::TorqueSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mj_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mj_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mj_interfaces::srv::TorqueSrv_Response & msg)
{
  return mj_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mj_interfaces::srv::TorqueSrv_Response>()
{
  return "mj_interfaces::srv::TorqueSrv_Response";
}

template<>
inline const char * name<mj_interfaces::srv::TorqueSrv_Response>()
{
  return "mj_interfaces/srv/TorqueSrv_Response";
}

template<>
struct has_fixed_size<mj_interfaces::srv::TorqueSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mj_interfaces::srv::TorqueSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mj_interfaces::srv::TorqueSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mj_interfaces::srv::TorqueSrv>()
{
  return "mj_interfaces::srv::TorqueSrv";
}

template<>
inline const char * name<mj_interfaces::srv::TorqueSrv>()
{
  return "mj_interfaces/srv/TorqueSrv";
}

template<>
struct has_fixed_size<mj_interfaces::srv::TorqueSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mj_interfaces::srv::TorqueSrv_Request>::value &&
    has_fixed_size<mj_interfaces::srv::TorqueSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mj_interfaces::srv::TorqueSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mj_interfaces::srv::TorqueSrv_Request>::value &&
    has_bounded_size<mj_interfaces::srv::TorqueSrv_Response>::value
  >
{
};

template<>
struct is_service<mj_interfaces::srv::TorqueSrv>
  : std::true_type
{
};

template<>
struct is_service_request<mj_interfaces::srv::TorqueSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mj_interfaces::srv::TorqueSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__TRAITS_HPP_
