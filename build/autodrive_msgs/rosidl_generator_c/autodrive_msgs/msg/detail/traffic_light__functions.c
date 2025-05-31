// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__functions.h"
// Member `corresponding_lane`
// Member `associated_light`
// Member `associated_stop_line`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autodrive_msgs__msg__TrafficLight__init(autodrive_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__init(&msg->detection)) {
    autodrive_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  // corresponding_lane
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->corresponding_lane, 0)) {
    autodrive_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  // associated_light
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->associated_light, 0)) {
    autodrive_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->associated_stop_line, 0)) {
    autodrive_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  // main_bulb
  // main_bulb_confidence
  // left_turn
  // left_bulb_confidence
  // right_turn
  // right_bulb_confidence
  // flashing
  // shape_category
  // shape_confidence
  return true;
}

void
autodrive_msgs__msg__TrafficLight__fini(autodrive_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // detection
  autodrive_msgs__msg__GeneralDetection__fini(&msg->detection);
  // corresponding_lane
  rosidl_runtime_c__uint64__Sequence__fini(&msg->corresponding_lane);
  // associated_light
  rosidl_runtime_c__uint64__Sequence__fini(&msg->associated_light);
  // associated_stop_line
  rosidl_runtime_c__uint64__Sequence__fini(&msg->associated_stop_line);
  // main_bulb
  // main_bulb_confidence
  // left_turn
  // left_bulb_confidence
  // right_turn
  // right_bulb_confidence
  // flashing
  // shape_category
  // shape_confidence
}

bool
autodrive_msgs__msg__TrafficLight__are_equal(const autodrive_msgs__msg__TrafficLight * lhs, const autodrive_msgs__msg__TrafficLight * rhs)
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
  // associated_light
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->associated_light), &(rhs->associated_light)))
  {
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->associated_stop_line), &(rhs->associated_stop_line)))
  {
    return false;
  }
  // main_bulb
  if (lhs->main_bulb != rhs->main_bulb) {
    return false;
  }
  // main_bulb_confidence
  if (lhs->main_bulb_confidence != rhs->main_bulb_confidence) {
    return false;
  }
  // left_turn
  if (lhs->left_turn != rhs->left_turn) {
    return false;
  }
  // left_bulb_confidence
  if (lhs->left_bulb_confidence != rhs->left_bulb_confidence) {
    return false;
  }
  // right_turn
  if (lhs->right_turn != rhs->right_turn) {
    return false;
  }
  // right_bulb_confidence
  if (lhs->right_bulb_confidence != rhs->right_bulb_confidence) {
    return false;
  }
  // flashing
  if (lhs->flashing != rhs->flashing) {
    return false;
  }
  // shape_category
  if (lhs->shape_category != rhs->shape_category) {
    return false;
  }
  // shape_confidence
  if (lhs->shape_confidence != rhs->shape_confidence) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__TrafficLight__copy(
  const autodrive_msgs__msg__TrafficLight * input,
  autodrive_msgs__msg__TrafficLight * output)
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
  // associated_light
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->associated_light), &(output->associated_light)))
  {
    return false;
  }
  // associated_stop_line
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->associated_stop_line), &(output->associated_stop_line)))
  {
    return false;
  }
  // main_bulb
  output->main_bulb = input->main_bulb;
  // main_bulb_confidence
  output->main_bulb_confidence = input->main_bulb_confidence;
  // left_turn
  output->left_turn = input->left_turn;
  // left_bulb_confidence
  output->left_bulb_confidence = input->left_bulb_confidence;
  // right_turn
  output->right_turn = input->right_turn;
  // right_bulb_confidence
  output->right_bulb_confidence = input->right_bulb_confidence;
  // flashing
  output->flashing = input->flashing;
  // shape_category
  output->shape_category = input->shape_category;
  // shape_confidence
  output->shape_confidence = input->shape_confidence;
  return true;
}

autodrive_msgs__msg__TrafficLight *
autodrive_msgs__msg__TrafficLight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficLight * msg = (autodrive_msgs__msg__TrafficLight *)allocator.allocate(sizeof(autodrive_msgs__msg__TrafficLight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__TrafficLight));
  bool success = autodrive_msgs__msg__TrafficLight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__TrafficLight__destroy(autodrive_msgs__msg__TrafficLight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__TrafficLight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__TrafficLight__Sequence__init(autodrive_msgs__msg__TrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficLight * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__TrafficLight *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__TrafficLight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__TrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__TrafficLight__fini(&data[i - 1]);
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
autodrive_msgs__msg__TrafficLight__Sequence__fini(autodrive_msgs__msg__TrafficLight__Sequence * array)
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
      autodrive_msgs__msg__TrafficLight__fini(&array->data[i]);
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

autodrive_msgs__msg__TrafficLight__Sequence *
autodrive_msgs__msg__TrafficLight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__TrafficLight__Sequence * array = (autodrive_msgs__msg__TrafficLight__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__TrafficLight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__TrafficLight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__TrafficLight__Sequence__destroy(autodrive_msgs__msg__TrafficLight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__TrafficLight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__TrafficLight__Sequence__are_equal(const autodrive_msgs__msg__TrafficLight__Sequence * lhs, const autodrive_msgs__msg__TrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__TrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__TrafficLight__Sequence__copy(
  const autodrive_msgs__msg__TrafficLight__Sequence * input,
  autodrive_msgs__msg__TrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__TrafficLight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__TrafficLight * data =
      (autodrive_msgs__msg__TrafficLight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__TrafficLight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__TrafficLight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__TrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
