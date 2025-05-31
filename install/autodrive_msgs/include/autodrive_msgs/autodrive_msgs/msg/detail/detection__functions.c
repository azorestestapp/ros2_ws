// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__functions.h"
// Member `dynamic_obstacles`
#include "autodrive_msgs/msg/detail/dynamic_obstacle__functions.h"
// Member `static_obstacles`
#include "autodrive_msgs/msg/detail/static_obstacle__functions.h"
// Member `railroad_crossings`
#include "autodrive_msgs/msg/detail/railroad_crossing__functions.h"
// Member `traffic_lights`
#include "autodrive_msgs/msg/detail/traffic_light__functions.h"
// Member `traffic_signs`
#include "autodrive_msgs/msg/detail/traffic_sign__functions.h"
// Member `speed_limits`
#include "autodrive_msgs/msg/detail/speed_limit__functions.h"
// Member `stop_lines`
#include "autodrive_msgs/msg/detail/stopline__functions.h"

bool
autodrive_msgs__msg__Detection__init(autodrive_msgs__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__Sequence__init(&msg->detection, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // dynamic_obstacles
  if (!autodrive_msgs__msg__DynamicObstacle__Sequence__init(&msg->dynamic_obstacles, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // static_obstacles
  if (!autodrive_msgs__msg__StaticObstacle__Sequence__init(&msg->static_obstacles, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // railroad_crossings
  if (!autodrive_msgs__msg__RailroadCrossing__Sequence__init(&msg->railroad_crossings, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // traffic_lights
  if (!autodrive_msgs__msg__TrafficLight__Sequence__init(&msg->traffic_lights, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // traffic_signs
  if (!autodrive_msgs__msg__TrafficSign__Sequence__init(&msg->traffic_signs, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // speed_limits
  if (!autodrive_msgs__msg__SpeedLimit__Sequence__init(&msg->speed_limits, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  // stop_lines
  if (!autodrive_msgs__msg__Stopline__Sequence__init(&msg->stop_lines, 0)) {
    autodrive_msgs__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
autodrive_msgs__msg__Detection__fini(autodrive_msgs__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detection
  autodrive_msgs__msg__GeneralDetection__Sequence__fini(&msg->detection);
  // dynamic_obstacles
  autodrive_msgs__msg__DynamicObstacle__Sequence__fini(&msg->dynamic_obstacles);
  // static_obstacles
  autodrive_msgs__msg__StaticObstacle__Sequence__fini(&msg->static_obstacles);
  // railroad_crossings
  autodrive_msgs__msg__RailroadCrossing__Sequence__fini(&msg->railroad_crossings);
  // traffic_lights
  autodrive_msgs__msg__TrafficLight__Sequence__fini(&msg->traffic_lights);
  // traffic_signs
  autodrive_msgs__msg__TrafficSign__Sequence__fini(&msg->traffic_signs);
  // speed_limits
  autodrive_msgs__msg__SpeedLimit__Sequence__fini(&msg->speed_limits);
  // stop_lines
  autodrive_msgs__msg__Stopline__Sequence__fini(&msg->stop_lines);
}

bool
autodrive_msgs__msg__Detection__are_equal(const autodrive_msgs__msg__Detection * lhs, const autodrive_msgs__msg__Detection * rhs)
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
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__Sequence__are_equal(
      &(lhs->detection), &(rhs->detection)))
  {
    return false;
  }
  // dynamic_obstacles
  if (!autodrive_msgs__msg__DynamicObstacle__Sequence__are_equal(
      &(lhs->dynamic_obstacles), &(rhs->dynamic_obstacles)))
  {
    return false;
  }
  // static_obstacles
  if (!autodrive_msgs__msg__StaticObstacle__Sequence__are_equal(
      &(lhs->static_obstacles), &(rhs->static_obstacles)))
  {
    return false;
  }
  // railroad_crossings
  if (!autodrive_msgs__msg__RailroadCrossing__Sequence__are_equal(
      &(lhs->railroad_crossings), &(rhs->railroad_crossings)))
  {
    return false;
  }
  // traffic_lights
  if (!autodrive_msgs__msg__TrafficLight__Sequence__are_equal(
      &(lhs->traffic_lights), &(rhs->traffic_lights)))
  {
    return false;
  }
  // traffic_signs
  if (!autodrive_msgs__msg__TrafficSign__Sequence__are_equal(
      &(lhs->traffic_signs), &(rhs->traffic_signs)))
  {
    return false;
  }
  // speed_limits
  if (!autodrive_msgs__msg__SpeedLimit__Sequence__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // stop_lines
  if (!autodrive_msgs__msg__Stopline__Sequence__are_equal(
      &(lhs->stop_lines), &(rhs->stop_lines)))
  {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__Detection__copy(
  const autodrive_msgs__msg__Detection * input,
  autodrive_msgs__msg__Detection * output)
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
  // detection
  if (!autodrive_msgs__msg__GeneralDetection__Sequence__copy(
      &(input->detection), &(output->detection)))
  {
    return false;
  }
  // dynamic_obstacles
  if (!autodrive_msgs__msg__DynamicObstacle__Sequence__copy(
      &(input->dynamic_obstacles), &(output->dynamic_obstacles)))
  {
    return false;
  }
  // static_obstacles
  if (!autodrive_msgs__msg__StaticObstacle__Sequence__copy(
      &(input->static_obstacles), &(output->static_obstacles)))
  {
    return false;
  }
  // railroad_crossings
  if (!autodrive_msgs__msg__RailroadCrossing__Sequence__copy(
      &(input->railroad_crossings), &(output->railroad_crossings)))
  {
    return false;
  }
  // traffic_lights
  if (!autodrive_msgs__msg__TrafficLight__Sequence__copy(
      &(input->traffic_lights), &(output->traffic_lights)))
  {
    return false;
  }
  // traffic_signs
  if (!autodrive_msgs__msg__TrafficSign__Sequence__copy(
      &(input->traffic_signs), &(output->traffic_signs)))
  {
    return false;
  }
  // speed_limits
  if (!autodrive_msgs__msg__SpeedLimit__Sequence__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // stop_lines
  if (!autodrive_msgs__msg__Stopline__Sequence__copy(
      &(input->stop_lines), &(output->stop_lines)))
  {
    return false;
  }
  return true;
}

autodrive_msgs__msg__Detection *
autodrive_msgs__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Detection * msg = (autodrive_msgs__msg__Detection *)allocator.allocate(sizeof(autodrive_msgs__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__Detection));
  bool success = autodrive_msgs__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__Detection__destroy(autodrive_msgs__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__Detection__Sequence__init(autodrive_msgs__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Detection * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__Detection *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__Detection__fini(&data[i - 1]);
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
autodrive_msgs__msg__Detection__Sequence__fini(autodrive_msgs__msg__Detection__Sequence * array)
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
      autodrive_msgs__msg__Detection__fini(&array->data[i]);
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

autodrive_msgs__msg__Detection__Sequence *
autodrive_msgs__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__Detection__Sequence * array = (autodrive_msgs__msg__Detection__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__Detection__Sequence__destroy(autodrive_msgs__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__Detection__Sequence__are_equal(const autodrive_msgs__msg__Detection__Sequence * lhs, const autodrive_msgs__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__Detection__Sequence__copy(
  const autodrive_msgs__msg__Detection__Sequence * input,
  autodrive_msgs__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__Detection * data =
      (autodrive_msgs__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
