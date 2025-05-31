// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/StackState.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INACTIVE'.
enum
{
  autodrive_msgs__msg__StackState__INACTIVE = 0
};

/// Constant 'STARTUP'.
enum
{
  autodrive_msgs__msg__StackState__STARTUP = 1
};

/// Constant 'ACTIVE'.
enum
{
  autodrive_msgs__msg__StackState__ACTIVE = 2
};

/// Constant 'SHUTDOWN'.
enum
{
  autodrive_msgs__msg__StackState__SHUTDOWN = 3
};

/// Struct defined in msg/StackState in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__StackState
{
  int8_t state;
} autodrive_msgs__msg__StackState;

// Struct for a sequence of autodrive_msgs__msg__StackState.
typedef struct autodrive_msgs__msg__StackState__Sequence
{
  autodrive_msgs__msg__StackState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__StackState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_H_
