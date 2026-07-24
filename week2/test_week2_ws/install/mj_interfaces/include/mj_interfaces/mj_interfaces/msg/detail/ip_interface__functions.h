// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__FUNCTIONS_H_
#define MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mj_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mj_interfaces/msg/detail/ip_interface__struct.h"

/// Initialize msg/IpInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mj_interfaces__msg__IpInterface
 * )) before or use
 * mj_interfaces__msg__IpInterface__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__init(mj_interfaces__msg__IpInterface * msg);

/// Finalize msg/IpInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__msg__IpInterface__fini(mj_interfaces__msg__IpInterface * msg);

/// Create msg/IpInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mj_interfaces__msg__IpInterface__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__msg__IpInterface *
mj_interfaces__msg__IpInterface__create();

/// Destroy msg/IpInterface message.
/**
 * It calls
 * mj_interfaces__msg__IpInterface__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__msg__IpInterface__destroy(mj_interfaces__msg__IpInterface * msg);

/// Check for msg/IpInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__are_equal(const mj_interfaces__msg__IpInterface * lhs, const mj_interfaces__msg__IpInterface * rhs);

/// Copy a msg/IpInterface message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__copy(
  const mj_interfaces__msg__IpInterface * input,
  mj_interfaces__msg__IpInterface * output);

/// Initialize array of msg/IpInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * mj_interfaces__msg__IpInterface__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__Sequence__init(mj_interfaces__msg__IpInterface__Sequence * array, size_t size);

/// Finalize array of msg/IpInterface messages.
/**
 * It calls
 * mj_interfaces__msg__IpInterface__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__msg__IpInterface__Sequence__fini(mj_interfaces__msg__IpInterface__Sequence * array);

/// Create array of msg/IpInterface messages.
/**
 * It allocates the memory for the array and calls
 * mj_interfaces__msg__IpInterface__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__msg__IpInterface__Sequence *
mj_interfaces__msg__IpInterface__Sequence__create(size_t size);

/// Destroy array of msg/IpInterface messages.
/**
 * It calls
 * mj_interfaces__msg__IpInterface__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__msg__IpInterface__Sequence__destroy(mj_interfaces__msg__IpInterface__Sequence * array);

/// Check for msg/IpInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__Sequence__are_equal(const mj_interfaces__msg__IpInterface__Sequence * lhs, const mj_interfaces__msg__IpInterface__Sequence * rhs);

/// Copy an array of msg/IpInterface messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__msg__IpInterface__Sequence__copy(
  const mj_interfaces__msg__IpInterface__Sequence * input,
  mj_interfaces__msg__IpInterface__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MJ_INTERFACES__MSG__DETAIL__IP_INTERFACE__FUNCTIONS_H_
