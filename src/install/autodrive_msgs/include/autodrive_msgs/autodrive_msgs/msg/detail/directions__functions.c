// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/directions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `manoeuvres`
#include "autodrive_msgs/msg/detail/manoeuvre__functions.h"

bool
autodrive_msgs__msg__Directions__init(autodrive_msgs__msg__Directions * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autodrive_msgs__msg__Directions__fini(msg);
    return false;
  }
  // manoeuvres
  if (!autodrive_msgs__msg__Manoeuvre__Sequence__init(&msg->manoeuvres, 0)) {
    autodrive_msgs__msg__Directions__fini(msg);
    return false;
  }
  return true;
}

void
autodrive_msgs__msg__Directions__fini(autodrive_msgs__msg__Directions * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // manoeuvres
  autodrive_msgs__msg__Manoeuvre__Sequence__fini(&msg->manoeuvres);
}

bool
autodrive_msgs__msg__Directions__are_equal(const autodrive_msgs__msg__Directions * lhs, const autodrive_msgs__msg__Directions * rhs)
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
  // manoeuvres
  if (!autodrive_msgs__msg__Manoeuvre__Sequence__are_equal(
      &(lhs->manoeuvres), &(rhs->manoeuvres)))
  {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__Directions__copy(
  const autodrive_msgs__msg__Directions * input,
  autodrive_msgs__msg__Directions * output)
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
  // manoeuvres
  if (!autodrive_msgs__msg__Manoeuvre__Sequence__copy(
      &(input->manoeuvres), &(output->manoeuvres)))
  {
    return false;
  }
  return true;
}

autodrive_msgs__msg__Directions *
autodrive_msgs__msg__Directions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Directions * msg = (autodrive_msgs__msg__Directions *)allocator.allocate(sizeof(autodrive_msgs__msg__Directions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__Directions));
  bool success = autodrive_msgs__msg__Directions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__Directions__destroy(autodrive_msgs__msg__Directions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__Directions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__Directions__Sequence__init(autodrive_msgs__msg__Directions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Directions * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__Directions *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__Directions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__Directions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__Directions__fini(&data[i - 1]);
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
autodrive_msgs__msg__Directions__Sequence__fini(autodrive_msgs__msg__Directions__Sequence * array)
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
      autodrive_msgs__msg__Directions__fini(&array->data[i]);
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

autodrive_msgs__msg__Directions__Sequence *
autodrive_msgs__msg__Directions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Directions__Sequence * array = (autodrive_msgs__msg__Directions__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__Directions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__Directions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__Directions__Sequence__destroy(autodrive_msgs__msg__Directions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__Directions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__Directions__Sequence__are_equal(const autodrive_msgs__msg__Directions__Sequence * lhs, const autodrive_msgs__msg__Directions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__Directions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__Directions__Sequence__copy(
  const autodrive_msgs__msg__Directions__Sequence * input,
  autodrive_msgs__msg__Directions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__Directions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__Directions * data =
      (autodrive_msgs__msg__Directions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__Directions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__Directions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__Directions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
