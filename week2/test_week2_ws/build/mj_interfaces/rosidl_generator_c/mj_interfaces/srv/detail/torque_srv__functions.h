// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mj_interfaces:srv/TorqueSrv.idl
// generated code does not contain a copyright notice

#ifndef MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__FUNCTIONS_H_
#define MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mj_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mj_interfaces/srv/detail/torque_srv__struct.h"

/// Initialize srv/TorqueSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mj_interfaces__srv__TorqueSrv_Request
 * )) before or use
 * mj_interfaces__srv__TorqueSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Request__init(mj_interfaces__srv__TorqueSrv_Request * msg);

/// Finalize srv/TorqueSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Request__fini(mj_interfaces__srv__TorqueSrv_Request * msg);

/// Create srv/TorqueSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mj_interfaces__srv__TorqueSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__srv__TorqueSrv_Request *
mj_interfaces__srv__TorqueSrv_Request__create();

/// Destroy srv/TorqueSrv message.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Request__destroy(mj_interfaces__srv__TorqueSrv_Request * msg);

/// Check for srv/TorqueSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Request__are_equal(const mj_interfaces__srv__TorqueSrv_Request * lhs, const mj_interfaces__srv__TorqueSrv_Request * rhs);

/// Copy a srv/TorqueSrv message.
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
mj_interfaces__srv__TorqueSrv_Request__copy(
  const mj_interfaces__srv__TorqueSrv_Request * input,
  mj_interfaces__srv__TorqueSrv_Request * output);

/// Initialize array of srv/TorqueSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * mj_interfaces__srv__TorqueSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Request__Sequence__init(mj_interfaces__srv__TorqueSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/TorqueSrv messages.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Request__Sequence__fini(mj_interfaces__srv__TorqueSrv_Request__Sequence * array);

/// Create array of srv/TorqueSrv messages.
/**
 * It allocates the memory for the array and calls
 * mj_interfaces__srv__TorqueSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__srv__TorqueSrv_Request__Sequence *
mj_interfaces__srv__TorqueSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/TorqueSrv messages.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Request__Sequence__destroy(mj_interfaces__srv__TorqueSrv_Request__Sequence * array);

/// Check for srv/TorqueSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Request__Sequence__are_equal(const mj_interfaces__srv__TorqueSrv_Request__Sequence * lhs, const mj_interfaces__srv__TorqueSrv_Request__Sequence * rhs);

/// Copy an array of srv/TorqueSrv messages.
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
mj_interfaces__srv__TorqueSrv_Request__Sequence__copy(
  const mj_interfaces__srv__TorqueSrv_Request__Sequence * input,
  mj_interfaces__srv__TorqueSrv_Request__Sequence * output);

/// Initialize srv/TorqueSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mj_interfaces__srv__TorqueSrv_Response
 * )) before or use
 * mj_interfaces__srv__TorqueSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Response__init(mj_interfaces__srv__TorqueSrv_Response * msg);

/// Finalize srv/TorqueSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Response__fini(mj_interfaces__srv__TorqueSrv_Response * msg);

/// Create srv/TorqueSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mj_interfaces__srv__TorqueSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__srv__TorqueSrv_Response *
mj_interfaces__srv__TorqueSrv_Response__create();

/// Destroy srv/TorqueSrv message.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Response__destroy(mj_interfaces__srv__TorqueSrv_Response * msg);

/// Check for srv/TorqueSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Response__are_equal(const mj_interfaces__srv__TorqueSrv_Response * lhs, const mj_interfaces__srv__TorqueSrv_Response * rhs);

/// Copy a srv/TorqueSrv message.
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
mj_interfaces__srv__TorqueSrv_Response__copy(
  const mj_interfaces__srv__TorqueSrv_Response * input,
  mj_interfaces__srv__TorqueSrv_Response * output);

/// Initialize array of srv/TorqueSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * mj_interfaces__srv__TorqueSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Response__Sequence__init(mj_interfaces__srv__TorqueSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/TorqueSrv messages.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Response__Sequence__fini(mj_interfaces__srv__TorqueSrv_Response__Sequence * array);

/// Create array of srv/TorqueSrv messages.
/**
 * It allocates the memory for the array and calls
 * mj_interfaces__srv__TorqueSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
mj_interfaces__srv__TorqueSrv_Response__Sequence *
mj_interfaces__srv__TorqueSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/TorqueSrv messages.
/**
 * It calls
 * mj_interfaces__srv__TorqueSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
void
mj_interfaces__srv__TorqueSrv_Response__Sequence__destroy(mj_interfaces__srv__TorqueSrv_Response__Sequence * array);

/// Check for srv/TorqueSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mj_interfaces
bool
mj_interfaces__srv__TorqueSrv_Response__Sequence__are_equal(const mj_interfaces__srv__TorqueSrv_Response__Sequence * lhs, const mj_interfaces__srv__TorqueSrv_Response__Sequence * rhs);

/// Copy an array of srv/TorqueSrv messages.
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
mj_interfaces__srv__TorqueSrv_Response__Sequence__copy(
  const mj_interfaces__srv__TorqueSrv_Response__Sequence * input,
  mj_interfaces__srv__TorqueSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MJ_INTERFACES__SRV__DETAIL__TORQUE_SRV__FUNCTIONS_H_
