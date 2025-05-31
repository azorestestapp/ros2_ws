// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/mpc_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autodrive_msgs__msg__MPCControl__init(autodrive_msgs__msg__MPCControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autodrive_msgs__msg__MPCControl__fini(msg);
    return false;
  }
  // duration
  // steering_angle_1
  // steering_angle_2
  // steering_angle_3
  // accel_1
  // accel_2
  // accel_3
  return true;
}

void
autodrive_msgs__msg__MPCControl__fini(autodrive_msgs__msg__MPCControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // duration
  // steering_angle_1
  // steering_angle_2
  // steering_angle_3
  // accel_1
  // accel_2
  // accel_3
}

bool
autodrive_msgs__msg__MPCControl__are_equal(const autodrive_msgs__msg__MPCControl * lhs, const autodrive_msgs__msg__MPCControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // steering_angle_1
  if (lhs->steering_angle_1 != rhs->steering_angle_1) {
    return false;
  }
  // steering_angle_2
  if (lhs->steering_angle_2 != rhs->steering_angle_2) {
    return false;
  }
  // steering_angle_3
  if (lhs->steering_angle_3 != rhs->steering_angle_3) {
    return false;
  }
  // accel_1
  if (lhs->accel_1 != rhs->accel_1) {
    return false;
  }
  // accel_2
  if (lhs->accel_2 != rhs->accel_2) {
    return false;
  }
  // accel_3
  if (lhs->accel_3 != rhs->accel_3) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__MPCControl__copy(
  const autodrive_msgs__msg__MPCControl * input,
  autodrive_msgs__msg__MPCControl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  // steering_angle_1
  output->steering_angle_1 = input->steering_angle_1;
  // steering_angle_2
  output->steering_angle_2 = input->steering_angle_2;
  // steering_angle_3
  output->steering_angle_3 = input->steering_angle_3;
  // accel_1
  output->accel_1 = input->accel_1;
  // accel_2
  output->accel_2 = input->accel_2;
  // accel_3
  output->accel_3 = input->accel_3;
  return true;
}

autodrive_msgs__msg__MPCControl *
autodrive_msgs__msg__MPCControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__MPCControl * msg = (autodrive_msgs__msg__MPCControl *)allocator.allocate(sizeof(autodrive_msgs__msg__MPCControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__MPCControl));
  bool success = autodrive_msgs__msg__MPCControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__MPCControl__destroy(autodrive_msgs__msg__MPCControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__MPCControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__MPCControl__Sequence__init(autodrive_msgs__msg__MPCControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__MPCControl * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__MPCControl *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__MPCControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__MPCControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__MPCControl__fini(&data[i - 1]);
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
autodrive_msgs__msg__MPCControl__Sequence__fini(autodrive_msgs__msg__MPCControl__Sequence * array)
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
      autodrive_msgs__msg__MPCControl__fini(&array->data[i]);
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

autodrive_msgs__msg__MPCControl__Sequence *
autodrive_msgs__msg__MPCControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__MPCControl__Sequence * array = (autodrive_msgs__msg__MPCControl__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__MPCControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__MPCControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__MPCControl__Sequence__destroy(autodrive_msgs__msg__MPCControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__MPCControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__MPCControl__Sequence__are_equal(const autodrive_msgs__msg__MPCControl__Sequence * lhs, const autodrive_msgs__msg__MPCControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__MPCControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__MPCControl__Sequence__copy(
  const autodrive_msgs__msg__MPCControl__Sequence * input,
  autodrive_msgs__msg__MPCControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__MPCControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__MPCControl * data =
      (autodrive_msgs__msg__MPCControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__MPCControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__MPCControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__MPCControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
