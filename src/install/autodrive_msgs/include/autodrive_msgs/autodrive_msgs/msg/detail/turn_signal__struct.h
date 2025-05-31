// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_SIGNAL'.
enum
{
  autodrive_msgs__msg__TurnSignal__NO_SIGNAL = 0
};

/// Constant 'LEFT'.
enum
{
  autodrive_msgs__msg__TurnSignal__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  autodrive_msgs__msg__TurnSignal__RIGHT = 2
};

/// Constant 'HAZARDS'.
enum
{
  autodrive_msgs__msg__TurnSignal__HAZARDS = 3
};

/// Constant 'PARK'.
enum
{
  autodrive_msgs__msg__TurnSignal__PARK = 4
};

/// Struct defined in msg/TurnSignal in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__TurnSignal
{
  int8_t signal;
} autodrive_msgs__msg__TurnSignal;

// Struct for a sequence of autodrive_msgs__msg__TurnSignal.
typedef struct autodrive_msgs__msg__TurnSignal__Sequence
{
  autodrive_msgs__msg__TurnSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__TurnSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
