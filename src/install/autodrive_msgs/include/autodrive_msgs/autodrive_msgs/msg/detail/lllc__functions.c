// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/LLLC.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/lllc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autodrive_msgs__msg__LLLC__init(autodrive_msgs__msg__LLLC * msg)
{
  if (!msg) {
    return false;
  }
  // torque
  // decel
  return true;
}

void
autodrive_msgs__msg__LLLC__fini(autodrive_msgs__msg__LLLC * msg)
{
  if (!msg) {
    return;
  }
  // torque
  // decel
}

bool
autodrive_msgs__msg__LLLC__are_equal(const autodrive_msgs__msg__LLLC * lhs, const autodrive_msgs__msg__LLLC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // decel
  if (lhs->decel != rhs->decel) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__LLLC__copy(
  const autodrive_msgs__msg__LLLC * input,
  autodrive_msgs__msg__LLLC * output)
{
  if (!input || !output) {
    return false;
  }
  // torque
  output->torque = input->torque;
  // decel
  output->decel = input->decel;
  return true;
}

autodrive_msgs__msg__LLLC *
autodrive_msgs__msg__LLLC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__LLLC * msg = (autodrive_msgs__msg__LLLC *)allocator.allocate(sizeof(autodrive_msgs__msg__LLLC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__LLLC));
  bool success = autodrive_msgs__msg__LLLC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__LLLC__destroy(autodrive_msgs__msg__LLLC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__LLLC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__LLLC__Sequence__init(autodrive_msgs__msg__LLLC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__LLLC * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__LLLC *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__LLLC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__LLLC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__LLLC__fini(&data[i - 1]);
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
autodrive_msgs__msg__LLLC__Sequence__fini(autodrive_msgs__msg__LLLC__Sequence * array)
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
      autodrive_msgs__msg__LLLC__fini(&array->data[i]);
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

autodrive_msgs__msg__LLLC__Sequence *
autodrive_msgs__msg__LLLC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__LLLC__Sequence * array = (autodrive_msgs__msg__LLLC__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__LLLC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__LLLC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__LLLC__Sequence__destroy(autodrive_msgs__msg__LLLC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__LLLC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__LLLC__Sequence__are_equal(const autodrive_msgs__msg__LLLC__Sequence * lhs, const autodrive_msgs__msg__LLLC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__LLLC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__LLLC__Sequence__copy(
  const autodrive_msgs__msg__LLLC__Sequence * input,
  autodrive_msgs__msg__LLLC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__LLLC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__LLLC * data =
      (autodrive_msgs__msg__LLLC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__LLLC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__LLLC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__LLLC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
