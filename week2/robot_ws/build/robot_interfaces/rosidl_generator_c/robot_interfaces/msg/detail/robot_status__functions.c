// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `control`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `stable`
#include "std_msgs/msg/detail/bool__functions.h"

bool
robot_interfaces__msg__RobotStatus__init(robot_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!std_msgs__msg__Header__init(&msg->time)) {
    robot_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Point__init(&msg->pose)) {
    robot_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    robot_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // control
  if (!std_msgs__msg__Float64__init(&msg->control)) {
    robot_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // stable
  if (!std_msgs__msg__Bool__init(&msg->stable)) {
    robot_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__RobotStatus__fini(robot_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // time
  std_msgs__msg__Header__fini(&msg->time);
  // pose
  geometry_msgs__msg__Point__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // control
  std_msgs__msg__Float64__fini(&msg->control);
  // stable
  std_msgs__msg__Bool__fini(&msg->stable);
}

bool
robot_interfaces__msg__RobotStatus__are_equal(const robot_interfaces__msg__RobotStatus * lhs, const robot_interfaces__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // control
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->control), &(rhs->control)))
  {
    return false;
  }
  // stable
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->stable), &(rhs->stable)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__RobotStatus__copy(
  const robot_interfaces__msg__RobotStatus * input,
  robot_interfaces__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!std_msgs__msg__Header__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Point__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // control
  if (!std_msgs__msg__Float64__copy(
      &(input->control), &(output->control)))
  {
    return false;
  }
  // stable
  if (!std_msgs__msg__Bool__copy(
      &(input->stable), &(output->stable)))
  {
    return false;
  }
  return true;
}

robot_interfaces__msg__RobotStatus *
robot_interfaces__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__RobotStatus * msg = (robot_interfaces__msg__RobotStatus *)allocator.allocate(sizeof(robot_interfaces__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__RobotStatus));
  bool success = robot_interfaces__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__RobotStatus__destroy(robot_interfaces__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__RobotStatus__Sequence__init(robot_interfaces__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__RobotStatus * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__RobotStatus__fini(&data[i - 1]);
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
robot_interfaces__msg__RobotStatus__Sequence__fini(robot_interfaces__msg__RobotStatus__Sequence * array)
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
      robot_interfaces__msg__RobotStatus__fini(&array->data[i]);
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

robot_interfaces__msg__RobotStatus__Sequence *
robot_interfaces__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__RobotStatus__Sequence * array = (robot_interfaces__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__RobotStatus__Sequence__destroy(robot_interfaces__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__RobotStatus__Sequence__are_equal(const robot_interfaces__msg__RobotStatus__Sequence * lhs, const robot_interfaces__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__RobotStatus__Sequence__copy(
  const robot_interfaces__msg__RobotStatus__Sequence * input,
  robot_interfaces__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__RobotStatus * data =
      (robot_interfaces__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
