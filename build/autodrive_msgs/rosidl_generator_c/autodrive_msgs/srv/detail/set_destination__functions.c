// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/srv/detail/set_destination__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
autodrive_msgs__srv__SetDestination_Request__init(autodrive_msgs__srv__SetDestination_Request * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // parking_lot
  // rand
  // rand_mindist
  // auto_re
  // skip_confirm
  // local_coord
  return true;
}

void
autodrive_msgs__srv__SetDestination_Request__fini(autodrive_msgs__srv__SetDestination_Request * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // parking_lot
  // rand
  // rand_mindist
  // auto_re
  // skip_confirm
  // local_coord
}

bool
autodrive_msgs__srv__SetDestination_Request__are_equal(const autodrive_msgs__srv__SetDestination_Request * lhs, const autodrive_msgs__srv__SetDestination_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // parking_lot
  if (lhs->parking_lot != rhs->parking_lot) {
    return false;
  }
  // rand
  if (lhs->rand != rhs->rand) {
    return false;
  }
  // rand_mindist
  if (lhs->rand_mindist != rhs->rand_mindist) {
    return false;
  }
  // auto_re
  if (lhs->auto_re != rhs->auto_re) {
    return false;
  }
  // skip_confirm
  if (lhs->skip_confirm != rhs->skip_confirm) {
    return false;
  }
  // local_coord
  if (lhs->local_coord != rhs->local_coord) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__srv__SetDestination_Request__copy(
  const autodrive_msgs__srv__SetDestination_Request * input,
  autodrive_msgs__srv__SetDestination_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // parking_lot
  output->parking_lot = input->parking_lot;
  // rand
  output->rand = input->rand;
  // rand_mindist
  output->rand_mindist = input->rand_mindist;
  // auto_re
  output->auto_re = input->auto_re;
  // skip_confirm
  output->skip_confirm = input->skip_confirm;
  // local_coord
  output->local_coord = input->local_coord;
  return true;
}

autodrive_msgs__srv__SetDestination_Request *
autodrive_msgs__srv__SetDestination_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Request * msg = (autodrive_msgs__srv__SetDestination_Request *)allocator.allocate(sizeof(autodrive_msgs__srv__SetDestination_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__srv__SetDestination_Request));
  bool success = autodrive_msgs__srv__SetDestination_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__srv__SetDestination_Request__destroy(autodrive_msgs__srv__SetDestination_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__srv__SetDestination_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__srv__SetDestination_Request__Sequence__init(autodrive_msgs__srv__SetDestination_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Request * data = NULL;

  if (size) {
    data = (autodrive_msgs__srv__SetDestination_Request *)allocator.zero_allocate(size, sizeof(autodrive_msgs__srv__SetDestination_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__srv__SetDestination_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__srv__SetDestination_Request__fini(&data[i - 1]);
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
autodrive_msgs__srv__SetDestination_Request__Sequence__fini(autodrive_msgs__srv__SetDestination_Request__Sequence * array)
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
      autodrive_msgs__srv__SetDestination_Request__fini(&array->data[i]);
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

autodrive_msgs__srv__SetDestination_Request__Sequence *
autodrive_msgs__srv__SetDestination_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Request__Sequence * array = (autodrive_msgs__srv__SetDestination_Request__Sequence *)allocator.allocate(sizeof(autodrive_msgs__srv__SetDestination_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__srv__SetDestination_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__srv__SetDestination_Request__Sequence__destroy(autodrive_msgs__srv__SetDestination_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__srv__SetDestination_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__srv__SetDestination_Request__Sequence__are_equal(const autodrive_msgs__srv__SetDestination_Request__Sequence * lhs, const autodrive_msgs__srv__SetDestination_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__srv__SetDestination_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__srv__SetDestination_Request__Sequence__copy(
  const autodrive_msgs__srv__SetDestination_Request__Sequence * input,
  autodrive_msgs__srv__SetDestination_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__srv__SetDestination_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__srv__SetDestination_Request * data =
      (autodrive_msgs__srv__SetDestination_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__srv__SetDestination_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__srv__SetDestination_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__srv__SetDestination_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
autodrive_msgs__srv__SetDestination_Response__init(autodrive_msgs__srv__SetDestination_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error
  return true;
}

void
autodrive_msgs__srv__SetDestination_Response__fini(autodrive_msgs__srv__SetDestination_Response * msg)
{
  if (!msg) {
    return;
  }
  // error
}

bool
autodrive_msgs__srv__SetDestination_Response__are_equal(const autodrive_msgs__srv__SetDestination_Response * lhs, const autodrive_msgs__srv__SetDestination_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
autodrive_msgs__srv__SetDestination_Response__copy(
  const autodrive_msgs__srv__SetDestination_Response * input,
  autodrive_msgs__srv__SetDestination_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  return true;
}

autodrive_msgs__srv__SetDestination_Response *
autodrive_msgs__srv__SetDestination_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Response * msg = (autodrive_msgs__srv__SetDestination_Response *)allocator.allocate(sizeof(autodrive_msgs__srv__SetDestination_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autodrive_msgs__srv__SetDestination_Response));
  bool success = autodrive_msgs__srv__SetDestination_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autodrive_msgs__srv__SetDestination_Response__destroy(autodrive_msgs__srv__SetDestination_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autodrive_msgs__srv__SetDestination_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autodrive_msgs__srv__SetDestination_Response__Sequence__init(autodrive_msgs__srv__SetDestination_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Response * data = NULL;

  if (size) {
    data = (autodrive_msgs__srv__SetDestination_Response *)allocator.zero_allocate(size, sizeof(autodrive_msgs__srv__SetDestination_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autodrive_msgs__srv__SetDestination_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autodrive_msgs__srv__SetDestination_Response__fini(&data[i - 1]);
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
autodrive_msgs__srv__SetDestination_Response__Sequence__fini(autodrive_msgs__srv__SetDestination_Response__Sequence * array)
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
      autodrive_msgs__srv__SetDestination_Response__fini(&array->data[i]);
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

autodrive_msgs__srv__SetDestination_Response__Sequence *
autodrive_msgs__srv__SetDestination_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autodrive_msgs__srv__SetDestination_Response__Sequence * array = (autodrive_msgs__srv__SetDestination_Response__Sequence *)allocator.allocate(sizeof(autodrive_msgs__srv__SetDestination_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autodrive_msgs__srv__SetDestination_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autodrive_msgs__srv__SetDestination_Response__Sequence__destroy(autodrive_msgs__srv__SetDestination_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autodrive_msgs__srv__SetDestination_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autodrive_msgs__srv__SetDestination_Response__Sequence__are_equal(const autodrive_msgs__srv__SetDestination_Response__Sequence * lhs, const autodrive_msgs__srv__SetDestination_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autodrive_msgs__srv__SetDestination_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autodrive_msgs__srv__SetDestination_Response__Sequence__copy(
  const autodrive_msgs__srv__SetDestination_Response__Sequence * input,
  autodrive_msgs__srv__SetDestination_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autodrive_msgs__srv__SetDestination_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autodrive_msgs__srv__SetDestination_Response * data =
      (autodrive_msgs__srv__SetDestination_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autodrive_msgs__srv__SetDestination_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autodrive_msgs__srv__SetDestination_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autodrive_msgs__srv__SetDestination_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
