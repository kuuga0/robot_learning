// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:srv/TorqueSet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__STRUCT_H_
#define ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TorqueSet in the package robot_interfaces.
typedef struct robot_interfaces__srv__TorqueSet_Request
{
  /// 力矩
  double torque;
} robot_interfaces__srv__TorqueSet_Request;

// Struct for a sequence of robot_interfaces__srv__TorqueSet_Request.
typedef struct robot_interfaces__srv__TorqueSet_Request__Sequence
{
  robot_interfaces__srv__TorqueSet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__TorqueSet_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TorqueSet in the package robot_interfaces.
typedef struct robot_interfaces__srv__TorqueSet_Response
{
  /// 成功
  bool success;
  /// 消息
  rosidl_runtime_c__String msg;
} robot_interfaces__srv__TorqueSet_Response;

// Struct for a sequence of robot_interfaces__srv__TorqueSet_Response.
typedef struct robot_interfaces__srv__TorqueSet_Response__Sequence
{
  robot_interfaces__srv__TorqueSet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__TorqueSet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__SRV__DETAIL__TORQUE_SET__STRUCT_H_
