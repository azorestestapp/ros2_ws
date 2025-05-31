// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/traffic_sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__functions.h"
// Member `corresponding_lane`
// Member `associated_sign`
// Member `associated_stop_line`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `start_day`
// Member `end_day`
#include "rosidl_runtime_c/string_functions.h"

bool
autodrive_msgs__msg__TrafficSign__init(autodrive_msgs__msg__TrafficSign * msg)
{
  if (!msg) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__init(&msg->detection)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  // corresponding_lane
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->corresponding_lane, 0)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  // associated_sign
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->associated_sign, 0)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->associated_stop_line, 0)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  // sign_type
  // sign_type_confidence
  // start_time
  // end_time
  // start_day
  if (!rosidl_runtime_c__String__init(&msg->start_day)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  // end_day
  if (!rosidl_runtime_c__String__init(&msg->end_day)) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
    return false;
  }
  return true;
}

void
autodrive_msgs__msg__TrafficSign__fini(autodrive_msgs__msg__TrafficSign * msg)
{
  if (!msg) {
    return;
  }
  // detection
  autodrive_msgs__msg__GeneralDetection__fini(&msg->detection);
  // corresponding_lane
  rosidl_runtime_c__uint64__Sequence__fini(&msg->corresponding_lane);
  // associated_sign
  rosidl_runtime_c__uint64__Sequence__fini(&msg->associated_sign);
  // associated_stop_line
  rosidl_runtime_c__uint64__Sequence__fini(&msg->associated_stop_line);
  // sign_type
  // sign_type_confidence
  // start_time
  // end_time
  // start_day
  rosidl_runtime_c__String__fini(&msg->start_day);
  // end_day
  rosidl_runtime_c__String__fini(&msg->end_day);
}

bool
autodrive_msgs__msg__TrafficSign__are_equal(const autodrive_msgs__msg__TrafficSign * lhs, const autodrive_msgs__msg__TrafficSign * rhs)
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
  // corresponding_lane
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->corresponding_lane), &(rhs->corresponding_lane)))
  {
    return false;
  }
  // associated_sign
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->associated_sign), &(rhs->associated_sign)))
  {
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->associated_stop_line), &(rhs->associated_stop_line)))
  {
    return false;
  }
  // sign_type
  if (lhs->sign_type != rhs->sign_type) {
    return false;
  }
  // sign_type_confidence
  if (lhs->sign_type_confidence != rhs->sign_type_confidence) {
    return false;
  }
  // start_time
  if (lhs->start_time != rhs->start_time) {
    return false;
  }
  // end_time
  if (lhs->end_time != rhs->end_time) {
    return false;
  }
  // start_day
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->start_day), &(rhs->start_day)))
  {
    return false;
  }
  // end_day
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->end_day), &(rhs->end_day)))
  {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__TrafficSign__copy(
  const autodrive_msgs__msg__TrafficSign * input,
  autodrive_msgs__msg__TrafficSign * output)
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
  // corresponding_lane
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->corresponding_lane), &(output->corresponding_lane)))
  {
    return false;
  }
  // associated_sign
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->associated_sign), &(output->associated_sign)))
  {
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->associated_stop_line), &(output->associated_stop_line)))
  {
    return false;
  }
  // sign_type
  output->sign_type = input->sign_type;
  // sign_type_confidence
  output->sign_type_confidence = input->sign_type_confidence;
  // start_time
  output->start_time = input->start_time;
  // end_time
  output->end_time = input->end_time;
  // start_day
  if (!rosidl_runtime_c__String__copy(
      &(input->start_day), &(output->start_day)))
  {
    return false;
  }
  // end_day
  if (!rosidl_runtime_c__String__copy(
      &(input->end_day), &(output->end_day)))
  {
    return false;
  }
  return true;
}

autodrive_msgs__msg__TrafficSign *
autodrive_msgs__msg__TrafficSign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficSign * msg = (autodrive_msgs__msg__TrafficSign *)allocator.allocate(sizeof(autodrive_msgs__msg__TrafficSign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__TrafficSign));
  bool success = autodrive_msgs__msg__TrafficSign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__TrafficSign__destroy(autodrive_msgs__msg__TrafficSign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__TrafficSign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__TrafficSign__Sequence__init(autodrive_msgs__msg__TrafficSign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficSign * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__TrafficSign *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__TrafficSign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__TrafficSign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__TrafficSign__fini(&data[i - 1]);
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
autodrive_msgs__msg__TrafficSign__Sequence__fini(autodrive_msgs__msg__TrafficSign__Sequence * array)
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
      autodrive_msgs__msg__TrafficSign__fini(&array->data[i]);
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

autodrive_msgs__msg__TrafficSign__Sequence *
autodrive_msgs__msg__TrafficSign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficSign__Sequence * array = (autodrive_msgs__msg__TrafficSign__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__TrafficSign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__TrafficSign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__TrafficSign__Sequence__destroy(autodrive_msgs__msg__TrafficSign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__TrafficSign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__TrafficSign__Sequence__are_equal(const autodrive_msgs__msg__TrafficSign__Sequence * lhs, const autodrive_msgs__msg__TrafficSign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__TrafficSign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__TrafficSign__Sequence__copy(
  const autodrive_msgs__msg__TrafficSign__Sequence * input,
  autodrive_msgs__msg__TrafficSign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__TrafficSign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__TrafficSign * data =
      (autodrive_msgs__msg__TrafficSign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__TrafficSign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__TrafficSign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__TrafficSign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
