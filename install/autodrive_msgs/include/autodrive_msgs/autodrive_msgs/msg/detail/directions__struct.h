// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'manoeuvres'
#include "autodrive_msgs/msg/detail/manoeuvre__struct.h"

/// Struct defined in msg/Directions in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Directions
{
  std_msgs__msg__Header header;
  autodrive_msgs__msg__Manoeuvre__Sequence manoeuvres;
} autodrive_msgs__msg__Directions;

// Struct for a sequence of autodrive_msgs__msg__Directions.
typedef struct autodrive_msgs__msg__Directions__Sequence
{
  autodrive_msgs__msg__Directions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Directions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_H_
