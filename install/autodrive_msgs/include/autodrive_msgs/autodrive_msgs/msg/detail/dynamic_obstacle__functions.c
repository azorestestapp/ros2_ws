// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/dynamic_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__functions.h"

bool
autodrive_msgs__msg__DynamicObstacle__init(autodrive_msgs__msg__DynamicObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__init(&msg->detection)) {
    autodrive_msgs__msg__DynamicObstacle__fini(msg);
    return false;
  }
  // obstacle_type
  // dynamic_confidence
  return true;
}

void
autodrive_msgs__msg__DynamicObstacle__fini(autodrive_msgs__msg__DynamicObstacle * msg)
{
  if (!msg) {
    return;
  }
  // detection
  autodrive_msgs__msg__GeneralDetection__fini(&msg->detection);
  // obstacle_type
  // dynamic_confidence
}

bool
autodrive_msgs__msg__DynamicObstacle__are_equal(const autodrive_msgs__msg__DynamicObstacle * lhs, const autodrive_msgs__msg__DynamicObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__are_equal(
      &(lhs->detection), &(rhs->detection)))
  {
    return false;
  }
  // obstacle_type
  if (lhs->obstacle_type != rhs->obstacle_type) {
    return false;
  }
  // dynamic_confidence
  if (lhs->dynamic_confidence != rhs->dynamic_confidence) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__DynamicObstacle__copy(
  const autodrive_msgs__msg__DynamicObstacle * input,
  autodrive_msgs__msg__DynamicObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__copy(
      &(input->detection), &(output->detection)))
  {
    return false;
  }
  // obstacle_type
  output->obstacle_type = input->obstacle_type;
  // dynamic_confidence
  output->dynamic_confidence = input->dynamic_confidence;
  return true;
}

autodrive_msgs__msg__DynamicObstacle *
autodrive_msgs__msg__DynamicObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__DynamicObstacle * msg = (autodrive_msgs__msg__DynamicObstacle *)allocator.allocate(sizeof(autodrive_msgs__msg__DynamicObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__DynamicObstacle));
  bool success = autodrive_msgs__msg__DynamicObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__DynamicObstacle__destroy(autodrive_msgs__msg__DynamicObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__DynamicObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__DynamicObstacle__Sequence__init(autodrive_msgs__msg__DynamicObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__DynamicObstacle * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__DynamicObstacle *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__DynamicObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__DynamicObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__DynamicObstacle__fini(&data[i - 1]);
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
autodrive_msgs__msg__DynamicObstacle__Sequence__fini(autodrive_msgs__msg__DynamicObstacle__Sequence * array)
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
      autodrive_msgs__msg__DynamicObstacle__fini(&array->data[i]);
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

autodrive_msgs__msg__DynamicObstacle__Sequence *
autodrive_msgs__msg__DynamicObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__DynamicObstacle__Sequence * array = (autodrive_msgs__msg__DynamicObstacle__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__DynamicObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__DynamicObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__DynamicObstacle__Sequence__destroy(autodrive_msgs__msg__DynamicObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__DynamicObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__DynamicObstacle__Sequence__are_equal(const autodrive_msgs__msg__DynamicObstacle__Sequence * lhs, const autodrive_msgs__msg__DynamicObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__DynamicObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__DynamicObstacle__Sequence__copy(
  const autodrive_msgs__msg__DynamicObstacle__Sequence * input,
  autodrive_msgs__msg__DynamicObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__DynamicObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__DynamicObstacle * data =
      (autodrive_msgs__msg__DynamicObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__DynamicObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__DynamicObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__DynamicObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
