// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTUP'.
enum
{
  autodrive_msgs__msg__CanState__STARTUP = 0
};

/// Constant 'PASSIVE'.
enum
{
  autodrive_msgs__msg__CanState__PASSIVE = 1
};

/// Constant 'ACTIVATION_FAILURE'.
enum
{
  autodrive_msgs__msg__CanState__ACTIVATION_FAILURE = 2
};

/// Constant 'ACTIVATION_CONDITION_CHECK'.
enum
{
  autodrive_msgs__msg__CanState__ACTIVATION_CONDITION_CHECK = 3
};

/// Constant 'BRAKE_ACTIVATION'.
enum
{
  autodrive_msgs__msg__CanState__BRAKE_ACTIVATION = 4
};

/// Constant 'WAIT_FOR_BRAKE_RELEASE'.
enum
{
  autodrive_msgs__msg__CanState__WAIT_FOR_BRAKE_RELEASE = 5
};

/// Constant 'STEERING_ACTIVATION'.
enum
{
  autodrive_msgs__msg__CanState__STEERING_ACTIVATION = 6
};

/// Constant 'PROPULSION_ACTIVATION'.
enum
{
  autodrive_msgs__msg__CanState__PROPULSION_ACTIVATION = 7
};

/// Constant 'ACTIVE_MODE_LOOP'.
enum
{
  autodrive_msgs__msg__CanState__ACTIVE_MODE_LOOP = 8
};

/// Constant 'DEACTIVATION'.
enum
{
  autodrive_msgs__msg__CanState__DEACTIVATION = 9
};

/// Struct defined in msg/CanState in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__CanState
{
  int8_t state;
} autodrive_msgs__msg__CanState;

// Struct for a sequence of autodrive_msgs__msg__CanState.
typedef struct autodrive_msgs__msg__CanState__Sequence
{
  autodrive_msgs__msg__CanState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__CanState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_
