// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/speed_limit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__functions.h"

bool
autodrive_msgs__msg__SpeedLimit__init(autodrive_msgs__msg__SpeedLimit * msg)
{
  if (!msg) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__init(&msg->detection)) {
    autodrive_msgs__msg__SpeedLimit__fini(msg);
    return false;
  }
  // max_speed
  // min_speed
  // speed_limit_confidence
  // unit
  // speed_limit_unit_confidence
  return true;
}

void
autodrive_msgs__msg__SpeedLimit__fini(autodrive_msgs__msg__SpeedLimit * msg)
{
  if (!msg) {
    return;
  }
  // detection
  autodrive_msgs__msg__GeneralDetection__fini(&msg->detection);
  // max_speed
  // min_speed
  // speed_limit_confidence
  // unit
  // speed_limit_unit_confidence
}

bool
autodrive_msgs__msg__SpeedLimit__are_equal(const autodrive_msgs__msg__SpeedLimit * lhs, const autodrive_msgs__msg__SpeedLimit * rhs)
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
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  // min_speed
  if (lhs->min_speed != rhs->min_speed) {
    return false;
  }
  // speed_limit_confidence
  if (lhs->speed_limit_confidence != rhs->speed_limit_confidence) {
    return false;
  }
  // unit
  if (lhs->unit != rhs->unit) {
    return false;
  }
  // speed_limit_unit_confidence
  if (lhs->speed_limit_unit_confidence != rhs->speed_limit_unit_confidence) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__SpeedLimit__copy(
  const autodrive_msgs__msg__SpeedLimit * input,
  autodrive_msgs__msg__SpeedLimit * output)
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
  // max_speed
  output->max_speed = input->max_speed;
  // min_speed
  output->min_speed = input->min_speed;
  // speed_limit_confidence
  output->speed_limit_confidence = input->speed_limit_confidence;
  // unit
  output->unit = input->unit;
  // speed_limit_unit_confidence
  output->speed_limit_unit_confidence = input->speed_limit_unit_confidence;
  return true;
}

autodrive_msgs__msg__SpeedLimit *
autodrive_msgs__msg__SpeedLimit__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SpeedLimit * msg = (autodrive_msgs__msg__SpeedLimit *)allocator.allocate(sizeof(autodrive_msgs__msg__SpeedLimit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__SpeedLimit));
  bool success = autodrive_msgs__msg__SpeedLimit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__SpeedLimit__destroy(autodrive_msgs__msg__SpeedLimit * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__SpeedLimit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__SpeedLimit__Sequence__init(autodrive_msgs__msg__SpeedLimit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SpeedLimit * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__SpeedLimit *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__SpeedLimit), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__SpeedLimit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__SpeedLimit__fini(&data[i - 1]);
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
autodrive_msgs__msg__SpeedLimit__Sequence__fini(autodrive_msgs__msg__SpeedLimit__Sequence * array)
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
      autodrive_msgs__msg__SpeedLimit__fini(&array->data[i]);
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

autodrive_msgs__msg__SpeedLimit__Sequence *
autodrive_msgs__msg__SpeedLimit__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SpeedLimit__Sequence * array = (autodrive_msgs__msg__SpeedLimit__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__SpeedLimit__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__SpeedLimit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__SpeedLimit__Sequence__destroy(autodrive_msgs__msg__SpeedLimit__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__SpeedLimit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__SpeedLimit__Sequence__are_equal(const autodrive_msgs__msg__SpeedLimit__Sequence * lhs, const autodrive_msgs__msg__SpeedLimit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__SpeedLimit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__SpeedLimit__Sequence__copy(
  const autodrive_msgs__msg__SpeedLimit__Sequence * input,
  autodrive_msgs__msg__SpeedLimit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__SpeedLimit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__SpeedLimit * data =
      (autodrive_msgs__msg__SpeedLimit *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__SpeedLimit__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__SpeedLimit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__SpeedLimit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
