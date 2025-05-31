// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/CanState.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/can_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autodrive_msgs__msg__CanState__init(autodrive_msgs__msg__CanState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
autodrive_msgs__msg__CanState__fini(autodrive_msgs__msg__CanState * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
autodrive_msgs__msg__CanState__are_equal(const autodrive_msgs__msg__CanState * lhs, const autodrive_msgs__msg__CanState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__CanState__copy(
  const autodrive_msgs__msg__CanState * input,
  autodrive_msgs__msg__CanState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

autodrive_msgs__msg__CanState *
autodrive_msgs__msg__CanState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__CanState * msg = (autodrive_msgs__msg__CanState *)allocator.allocate(sizeof(autodrive_msgs__msg__CanState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__CanState));
  bool success = autodrive_msgs__msg__CanState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__CanState__destroy(autodrive_msgs__msg__CanState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__CanState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__CanState__Sequence__init(autodrive_msgs__msg__CanState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__CanState * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__CanState *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__CanState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__CanState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__CanState__fini(&data[i - 1]);
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
autodrive_msgs__msg__CanState__Sequence__fini(autodrive_msgs__msg__CanState__Sequence * array)
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
      autodrive_msgs__msg__CanState__fini(&array->data[i]);
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

autodrive_msgs__msg__CanState__Sequence *
autodrive_msgs__msg__CanState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__CanState__Sequence * array = (autodrive_msgs__msg__CanState__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__CanState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__CanState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__CanState__Sequence__destroy(autodrive_msgs__msg__CanState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__CanState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__CanState__Sequence__are_equal(const autodrive_msgs__msg__CanState__Sequence * lhs, const autodrive_msgs__msg__CanState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__CanState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__CanState__Sequence__copy(
  const autodrive_msgs__msg__CanState__Sequence * input,
  autodrive_msgs__msg__CanState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__CanState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__CanState * data =
      (autodrive_msgs__msg__CanState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__CanState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__CanState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__CanState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
