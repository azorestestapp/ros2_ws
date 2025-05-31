// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/Destination.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/destination__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autodrive_msgs__msg__Destination__init(autodrive_msgs__msg__Destination * msg)
{
  if (!msg) {
    return false;
  }
  // east
  // north
  // parking
  // multiroute
  return true;
}

void
autodrive_msgs__msg__Destination__fini(autodrive_msgs__msg__Destination * msg)
{
  if (!msg) {
    return;
  }
  // east
  // north
  // parking
  // multiroute
}

bool
autodrive_msgs__msg__Destination__are_equal(const autodrive_msgs__msg__Destination * lhs, const autodrive_msgs__msg__Destination * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // east
  if (lhs->east != rhs->east) {
    return false;
  }
  // north
  if (lhs->north != rhs->north) {
    return false;
  }
  // parking
  if (lhs->parking != rhs->parking) {
    return false;
  }
  // multiroute
  if (lhs->multiroute != rhs->multiroute) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__Destination__copy(
  const autodrive_msgs__msg__Destination * input,
  autodrive_msgs__msg__Destination * output)
{
  if (!input || !output) {
    return false;
  }
  // east
  output->east = input->east;
  // north
  output->north = input->north;
  // parking
  output->parking = input->parking;
  // multiroute
  output->multiroute = input->multiroute;
  return true;
}

autodrive_msgs__msg__Destination *
autodrive_msgs__msg__Destination__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Destination * msg = (autodrive_msgs__msg__Destination *)allocator.allocate(sizeof(autodrive_msgs__msg__Destination), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__Destination));
  bool success = autodrive_msgs__msg__Destination__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__Destination__destroy(autodrive_msgs__msg__Destination * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__Destination__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__Destination__Sequence__init(autodrive_msgs__msg__Destination__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Destination * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__Destination *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__Destination), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__Destination__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__Destination__fini(&data[i - 1]);
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
autodrive_msgs__msg__Destination__Sequence__fini(autodrive_msgs__msg__Destination__Sequence * array)
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
      autodrive_msgs__msg__Destination__fini(&array->data[i]);
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

autodrive_msgs__msg__Destination__Sequence *
autodrive_msgs__msg__Destination__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Destination__Sequence * array = (autodrive_msgs__msg__Destination__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__Destination__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__Destination__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__Destination__Sequence__destroy(autodrive_msgs__msg__Destination__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__Destination__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__Destination__Sequence__are_equal(const autodrive_msgs__msg__Destination__Sequence * lhs, const autodrive_msgs__msg__Destination__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__Destination__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__Destination__Sequence__copy(
  const autodrive_msgs__msg__Destination__Sequence * input,
  autodrive_msgs__msg__Destination__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__Destination);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__Destination * data =
      (autodrive_msgs__msg__Destination *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__Destination__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__Destination__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__Destination__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
