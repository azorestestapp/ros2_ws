// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Manoeuvre.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "autodrive_msgs/msg/detail/direction__struct.h"

/// Struct defined in msg/Manoeuvre in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Manoeuvre
{
  autodrive_msgs__msg__Direction direction;
} autodrive_msgs__msg__Manoeuvre;

// Struct for a sequence of autodrive_msgs__msg__Manoeuvre.
typedef struct autodrive_msgs__msg__Manoeuvre__Sequence
{
  autodrive_msgs__msg__Manoeuvre * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Manoeuvre__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_H_
