// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_H_
#define MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/TorqueSrv in the package mj_interfaces.
typedef struct mj_interfaces__srv__TorqueSrv_Request
{
  /// 具体的值
  geometry_msgs__msg__Vector3 torque;
} mj_interfaces__srv__TorqueSrv_Request;

// Struct for a sequence of mj_interfaces__srv__TorqueSrv_Request.
typedef struct mj_interfaces__srv__TorqueSrv_Request__Sequence
{
  mj_interfaces__srv__TorqueSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mj_interfaces__srv__TorqueSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TorqueSrv in the package mj_interfaces.
typedef struct mj_interfaces__srv__TorqueSrv_Response
{
  /// 是否成功
  bool success;
  /// 消息
  rosidl_runtime_c__String message;
} mj_interfaces__srv__TorqueSrv_Response;

// Struct for a sequence of mj_interfaces__srv__TorqueSrv_Response.
typedef struct mj_interfaces__srv__TorqueSrv_Response__Sequence
{
  mj_interfaces__srv__TorqueSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mj_interfaces__srv__TorqueSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__STRUCT_H_
