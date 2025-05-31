// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/GeneralDetection.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/general_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bounding_box`
#include "vision_msgs/msg/detail/bounding_box3_d__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
autodrive_msgs__msg__GeneralDetection__init(autodrive_msgs__msg__GeneralDetection * msg)
{
  if (!msg) {
    return false;
  }
  // bounding_box
  if (!vision_msgs__msg__BoundingBox3D__init(&msg->bounding_box)) {
    autodrive_msgs__msg__GeneralDetection__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    autodrive_msgs__msg__GeneralDetection__fini(msg);
    return false;
  }
  // id
  return true;
}

void
autodrive_msgs__msg__GeneralDetection__fini(autodrive_msgs__msg__GeneralDetection * msg)
{
  if (!msg) {
    return;
  }
  // bounding_box
  vision_msgs__msg__BoundingBox3D__fini(&msg->bounding_box);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // id
}

bool
autodrive_msgs__msg__GeneralDetection__are_equal(const autodrive_msgs__msg__GeneralDetection * lhs, const autodrive_msgs__msg__GeneralDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bounding_box
  if (!vision_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__GeneralDetection__copy(
  const autodrive_msgs__msg__GeneralDetection * input,
  autodrive_msgs__msg__GeneralDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // bounding_box
  if (!vision_msgs__msg__BoundingBox3D__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

autodrive_msgs__msg__GeneralDetection *
autodrive_msgs__msg__GeneralDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__GeneralDetection * msg = (autodrive_msgs__msg__GeneralDetection *)allocator.allocate(sizeof(autodrive_msgs__msg__GeneralDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__GeneralDetection));
  bool success = autodrive_msgs__msg__GeneralDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__GeneralDetection__destroy(autodrive_msgs__msg__GeneralDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__GeneralDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__GeneralDetection__Sequence__init(autodrive_msgs__msg__GeneralDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__GeneralDetection * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__GeneralDetection *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__GeneralDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__GeneralDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__GeneralDetection__fini(&data[i - 1]);
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
autodrive_msgs__msg__GeneralDetection__Sequence__fini(autodrive_msgs__msg__GeneralDetection__Sequence * array)
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
      autodrive_msgs__msg__GeneralDetection__fini(&array->data[i]);
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

autodrive_msgs__msg__GeneralDetection__Sequence *
autodrive_msgs__msg__GeneralDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__GeneralDetection__Sequence * array = (autodrive_msgs__msg__GeneralDetection__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__GeneralDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__GeneralDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__GeneralDetection__Sequence__destroy(autodrive_msgs__msg__GeneralDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__GeneralDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__GeneralDetection__Sequence__are_equal(const autodrive_msgs__msg__GeneralDetection__Sequence * lhs, const autodrive_msgs__msg__GeneralDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__GeneralDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__GeneralDetection__Sequence__copy(
  const autodrive_msgs__msg__GeneralDetection__Sequence * input,
  autodrive_msgs__msg__GeneralDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__GeneralDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__GeneralDetection * data =
      (autodrive_msgs__msg__GeneralDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__GeneralDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__GeneralDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__GeneralDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
