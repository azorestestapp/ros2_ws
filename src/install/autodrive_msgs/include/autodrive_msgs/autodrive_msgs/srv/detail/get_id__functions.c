// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/srv/detail/get_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `east`
// Member `north`
// Member `radius`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autodrive_msgs__srv__GetId_Request__init(autodrive_msgs__srv__GetId_Request * msg)
{
  if (!msg) {
    return false;
  }
  // east
  if (!rosidl_runtime_c__double__Sequence__init(&msg->east, 0)) {
    autodrive_msgs__srv__GetId_Request__fini(msg);
    return false;
  }
  // north
  if (!rosidl_runtime_c__double__Sequence__init(&msg->north, 0)) {
    autodrive_msgs__srv__GetId_Request__fini(msg);
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__init(&msg->radius, 0)) {
    autodrive_msgs__srv__GetId_Request__fini(msg);
    return false;
  }
  return true;
}

void
autodrive_msgs__srv__GetId_Request__fini(autodrive_msgs__srv__GetId_Request * msg)
{
  if (!msg) {
    return;
  }
  // east
  rosidl_runtime_c__double__Sequence__fini(&msg->east);
  // north
  rosidl_runtime_c__double__Sequence__fini(&msg->north);
  // radius
  rosidl_runtime_c__double__Sequence__fini(&msg->radius);
}

bool
autodrive_msgs__srv__GetId_Request__are_equal(const autodrive_msgs__srv__GetId_Request * lhs, const autodrive_msgs__srv__GetId_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // east
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->east), &(rhs->east)))
  {
    return false;
  }
  // north
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->north), &(rhs->north)))
  {
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->radius), &(rhs->radius)))
  {
    return false;
  }
  return true;
}

bool
autodrive_msgs__srv__GetId_Request__copy(
  const autodrive_msgs__srv__GetId_Request * input,
  autodrive_msgs__srv__GetId_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // east
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->east), &(output->east)))
  {
    return false;
  }
  // north
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->north), &(output->north)))
  {
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->radius), &(output->radius)))
  {
    return false;
  }
  return true;
}

autodrive_msgs__srv__GetId_Request *
autodrive_msgs__srv__GetId_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Request * msg = (autodrive_msgs__srv__GetId_Request *)allocator.allocate(sizeof(autodrive_msgs__srv__GetId_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__srv__GetId_Request));
  bool success = autodrive_msgs__srv__GetId_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__srv__GetId_Request__destroy(autodrive_msgs__srv__GetId_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__srv__GetId_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__srv__GetId_Request__Sequence__init(autodrive_msgs__srv__GetId_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Request * data = NULL;

  if (size) {
    data = (autodrive_msgs__srv__GetId_Request *)allocator.zero_allocate(size, sizeof(autodrive_msgs__srv__GetId_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__srv__GetId_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__srv__GetId_Request__fini(&data[i - 1]);
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
autodrive_msgs__srv__GetId_Request__Sequence__fini(autodrive_msgs__srv__GetId_Request__Sequence * array)
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
      autodrive_msgs__srv__GetId_Request__fini(&array->data[i]);
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

autodrive_msgs__srv__GetId_Request__Sequence *
autodrive_msgs__srv__GetId_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Request__Sequence * array = (autodrive_msgs__srv__GetId_Request__Sequence *)allocator.allocate(sizeof(autodrive_msgs__srv__GetId_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__srv__GetId_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__srv__GetId_Request__Sequence__destroy(autodrive_msgs__srv__GetId_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__srv__GetId_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__srv__GetId_Request__Sequence__are_equal(const autodrive_msgs__srv__GetId_Request__Sequence * lhs, const autodrive_msgs__srv__GetId_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__srv__GetId_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__srv__GetId_Request__Sequence__copy(
  const autodrive_msgs__srv__GetId_Request__Sequence * input,
  autodrive_msgs__srv__GetId_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__srv__GetId_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__srv__GetId_Request * data =
      (autodrive_msgs__srv__GetId_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__srv__GetId_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__srv__GetId_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__srv__GetId_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `lanelet_id`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autodrive_msgs__srv__GetId_Response__init(autodrive_msgs__srv__GetId_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error
  // lanelet_id
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->lanelet_id, 0)) {
    autodrive_msgs__srv__GetId_Response__fini(msg);
    return false;
  }
  return true;
}

void
autodrive_msgs__srv__GetId_Response__fini(autodrive_msgs__srv__GetId_Response * msg)
{
  if (!msg) {
    return;
  }
  // error
  // lanelet_id
  rosidl_runtime_c__uint64__Sequence__fini(&msg->lanelet_id);
}

bool
autodrive_msgs__srv__GetId_Response__are_equal(const autodrive_msgs__srv__GetId_Response * lhs, const autodrive_msgs__srv__GetId_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // lanelet_id
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->lanelet_id), &(rhs->lanelet_id)))
  {
    return false;
  }
  return true;
}

bool
autodrive_msgs__srv__GetId_Response__copy(
  const autodrive_msgs__srv__GetId_Response * input,
  autodrive_msgs__srv__GetId_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  // lanelet_id
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->lanelet_id), &(output->lanelet_id)))
  {
    return false;
  }
  return true;
}

autodrive_msgs__srv__GetId_Response *
autodrive_msgs__srv__GetId_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Response * msg = (autodrive_msgs__srv__GetId_Response *)allocator.allocate(sizeof(autodrive_msgs__srv__GetId_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__srv__GetId_Response));
  bool success = autodrive_msgs__srv__GetId_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__srv__GetId_Response__destroy(autodrive_msgs__srv__GetId_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__srv__GetId_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__srv__GetId_Response__Sequence__init(autodrive_msgs__srv__GetId_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Response * data = NULL;

  if (size) {
    data = (autodrive_msgs__srv__GetId_Response *)allocator.zero_allocate(size, sizeof(autodrive_msgs__srv__GetId_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__srv__GetId_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__srv__GetId_Response__fini(&data[i - 1]);
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
autodrive_msgs__srv__GetId_Response__Sequence__fini(autodrive_msgs__srv__GetId_Response__Sequence * array)
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
      autodrive_msgs__srv__GetId_Response__fini(&array->data[i]);
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

autodrive_msgs__srv__GetId_Response__Sequence *
autodrive_msgs__srv__GetId_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__GetId_Response__Sequence * array = (autodrive_msgs__srv__GetId_Response__Sequence *)allocator.allocate(sizeof(autodrive_msgs__srv__GetId_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__srv__GetId_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__srv__GetId_Response__Sequence__destroy(autodrive_msgs__srv__GetId_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__srv__GetId_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__srv__GetId_Response__Sequence__are_equal(const autodrive_msgs__srv__GetId_Response__Sequence * lhs, const autodrive_msgs__srv__GetId_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__srv__GetId_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__srv__GetId_Response__Sequence__copy(
  const autodrive_msgs__srv__GetId_Response__Sequence * input,
  autodrive_msgs__srv__GetId_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__srv__GetId_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__srv__GetId_Response * data =
      (autodrive_msgs__srv__GetId_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__srv__GetId_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__srv__GetId_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__srv__GetId_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
