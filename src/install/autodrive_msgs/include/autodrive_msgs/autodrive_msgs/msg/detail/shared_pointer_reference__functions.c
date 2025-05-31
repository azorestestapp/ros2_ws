// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/shared_pointer_reference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `shared_pointer_key`
#include "rosidl_runtime_c/string_functions.h"

bool
autodrive_msgs__msg__SharedPointerReference__init(autodrive_msgs__msg__SharedPointerReference * msg)
{
  if (!msg) {
    return false;
  }
  // shared_pointer_key
  if (!rosidl_runtime_c__String__init(&msg->shared_pointer_key)) {
    autodrive_msgs__msg__SharedPointerReference__fini(msg);
    return false;
  }
  // map_active
  // graph_active
  return true;
}

void
autodrive_msgs__msg__SharedPointerReference__fini(autodrive_msgs__msg__SharedPointerReference * msg)
{
  if (!msg) {
    return;
  }
  // shared_pointer_key
  rosidl_runtime_c__String__fini(&msg->shared_pointer_key);
  // map_active
  // graph_active
}

bool
autodrive_msgs__msg__SharedPointerReference__are_equal(const autodrive_msgs__msg__SharedPointerReference * lhs, const autodrive_msgs__msg__SharedPointerReference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shared_pointer_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shared_pointer_key), &(rhs->shared_pointer_key)))
  {
    return false;
  }
  // map_active
  if (lhs->map_active != rhs->map_active) {
    return false;
  }
  // graph_active
  if (lhs->graph_active != rhs->graph_active) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__msg__SharedPointerReference__copy(
  const autodrive_msgs__msg__SharedPointerReference * input,
  autodrive_msgs__msg__SharedPointerReference * output)
{
  if (!input || !output) {
    return false;
  }
  // shared_pointer_key
  if (!rosidl_runtime_c__String__copy(
      &(input->shared_pointer_key), &(output->shared_pointer_key)))
  {
    return false;
  }
  // map_active
  output->map_active = input->map_active;
  // graph_active
  output->graph_active = input->graph_active;
  return true;
}

autodrive_msgs__msg__SharedPointerReference *
autodrive_msgs__msg__SharedPointerReference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SharedPointerReference * msg = (autodrive_msgs__msg__SharedPointerReference *)allocator.allocate(sizeof(autodrive_msgs__msg__SharedPointerReference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__msg__SharedPointerReference));
  bool success = autodrive_msgs__msg__SharedPointerReference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__msg__SharedPointerReference__destroy(autodrive_msgs__msg__SharedPointerReference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__msg__SharedPointerReference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__msg__SharedPointerReference__Sequence__init(autodrive_msgs__msg__SharedPointerReference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SharedPointerReference * data = NULL;

  if (size) {
    data = (autodrive_msgs__msg__SharedPointerReference *)allocator.zero_allocate(size, sizeof(autodrive_msgs__msg__SharedPointerReference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__msg__SharedPointerReference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__msg__SharedPointerReference__fini(&data[i - 1]);
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
autodrive_msgs__msg__SharedPointerReference__Sequence__fini(autodrive_msgs__msg__SharedPointerReference__Sequence * array)
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
      autodrive_msgs__msg__SharedPointerReference__fini(&array->data[i]);
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

autodrive_msgs__msg__SharedPointerReference__Sequence *
autodrive_msgs__msg__SharedPointerReference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__msg__SharedPointerReference__Sequence * array = (autodrive_msgs__msg__SharedPointerReference__Sequence *)allocator.allocate(sizeof(autodrive_msgs__msg__SharedPointerReference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__msg__SharedPointerReference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__msg__SharedPointerReference__Sequence__destroy(autodrive_msgs__msg__SharedPointerReference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__msg__SharedPointerReference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__msg__SharedPointerReference__Sequence__are_equal(const autodrive_msgs__msg__SharedPointerReference__Sequence * lhs, const autodrive_msgs__msg__SharedPointerReference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__msg__SharedPointerReference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__msg__SharedPointerReference__Sequence__copy(
  const autodrive_msgs__msg__SharedPointerReference__Sequence * input,
  autodrive_msgs__msg__SharedPointerReference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__msg__SharedPointerReference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__msg__SharedPointerReference * data =
      (autodrive_msgs__msg__SharedPointerReference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__msg__SharedPointerReference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__msg__SharedPointerReference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__msg__SharedPointerReference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
