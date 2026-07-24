// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mj_interfaces:msg/IpInterface.idl
// generated code does not contain a copyright notice
#include "mj_interfaces/msg/detail/ip_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `omega`
// Member `torque`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mj_interfaces__msg__IpInterface__init(mj_interfaces__msg__IpInterface * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mj_interfaces__msg__IpInterface__fini(msg);
    return false;
  }
  // theta
  // omega
  if (!geometry_msgs__msg__Vector3__init(&msg->omega)) {
    mj_interfaces__msg__IpInterface__fini(msg);
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__init(&msg->torque)) {
    mj_interfaces__msg__IpInterface__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mj_interfaces__msg__IpInterface__fini(msg);
    return false;
  }
  return true;
}

void
mj_interfaces__msg__IpInterface__fini(mj_interfaces__msg__IpInterface * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // theta
  // omega
  geometry_msgs__msg__Vector3__fini(&msg->omega);
  // torque
  geometry_msgs__msg__Vector3__fini(&msg->torque);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
mj_interfaces__msg__IpInterface__are_equal(const mj_interfaces__msg__IpInterface * lhs, const mj_interfaces__msg__IpInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // omega
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->omega), &(rhs->omega)))
  {
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
mj_interfaces__msg__IpInterface__copy(
  const mj_interfaces__msg__IpInterface * input,
  mj_interfaces__msg__IpInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  // omega
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->omega), &(output->omega)))
  {
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

mj_interfaces__msg__IpInterface *
mj_interfaces__msg__IpInterface__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mj_interfaces__msg__IpInterface * msg = (mj_interfaces__msg__IpInterface *)allocator.allocate(sizeof(mj_interfaces__msg__IpInterface), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mj_interfaces__msg__IpInterface));
  bool success = mj_interfaces__msg__IpInterface__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mj_interfaces__msg__IpInterface__destroy(mj_interfaces__msg__IpInterface * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mj_interfaces__msg__IpInterface__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mj_interfaces__msg__IpInterface__Sequence__init(mj_interfaces__msg__IpInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mj_interfaces__msg__IpInterface * data = NULL;

  if (size) {
    data = (mj_interfaces__msg__IpInterface *)allocator.zero_allocate(size, sizeof(mj_interfaces__msg__IpInterface), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mj_interfaces__msg__IpInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mj_interfaces__msg__IpInterface__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mj_interfaces__msg__IpInterface__Sequence__fini(mj_interfaces__msg__IpInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mj_interfaces__msg__IpInterface__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mj_interfaces__msg__IpInterface__Sequence *
mj_interfaces__msg__IpInterface__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mj_interfaces__msg__IpInterface__Sequence * array = (mj_interfaces__msg__IpInterface__Sequence *)allocator.allocate(sizeof(mj_interfaces__msg__IpInterface__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mj_interfaces__msg__IpInterface__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mj_interfaces__msg__IpInterface__Sequence__destroy(mj_interfaces__msg__IpInterface__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mj_interfaces__msg__IpInterface__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mj_interfaces__msg__IpInterface__Sequence__are_equal(const mj_interfaces__msg__IpInterface__Sequence * lhs, const mj_interfaces__msg__IpInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mj_interfaces__msg__IpInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mj_interfaces__msg__IpInterface__Sequence__copy(
  const mj_interfaces__msg__IpInterface__Sequence * input,
  mj_interfaces__msg__IpInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mj_interfaces__msg__IpInterface);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mj_interfaces__msg__IpInterface * data =
      (mj_interfaces__msg__IpInterface *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mj_interfaces__msg__IpInterface__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mj_interfaces__msg__IpInterface__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mj_interfaces__msg__IpInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
