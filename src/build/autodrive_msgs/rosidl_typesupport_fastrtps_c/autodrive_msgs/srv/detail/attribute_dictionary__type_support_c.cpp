// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/srv/detail/attribute_dictionary__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/srv/detail/attribute_dictionary__struct.h"
#include "autodrive_msgs/srv/detail/attribute_dictionary__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // attribute_key, attribute_val
#include "rosidl_runtime_c/string_functions.h"  // attribute_key, attribute_val

// forward declare type support functions


using _AttributeDictionary_Request__ros_msg_type = autodrive_msgs__srv__AttributeDictionary_Request;

static bool _AttributeDictionary_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AttributeDictionary_Request__ros_msg_type * ros_message = static_cast<const _AttributeDictionary_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: attribute_key
  {
    const rosidl_runtime_c__String * str = &ros_message->attribute_key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: attribute_val
  {
    const rosidl_runtime_c__String * str = &ros_message->attribute_val;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _AttributeDictionary_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AttributeDictionary_Request__ros_msg_type * ros_message = static_cast<_AttributeDictionary_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: attribute_key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->attribute_key.data) {
      rosidl_runtime_c__String__init(&ros_message->attribute_key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->attribute_key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'attribute_key'\n");
      return false;
    }
  }

  // Field name: attribute_val
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->attribute_val.data) {
      rosidl_runtime_c__String__init(&ros_message->attribute_val);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->attribute_val,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'attribute_val'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__srv__AttributeDictionary_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AttributeDictionary_Request__ros_msg_type * ros_message = static_cast<const _AttributeDictionary_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name attribute_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->attribute_key.size + 1);
  // field.name attribute_val
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->attribute_val.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AttributeDictionary_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__srv__AttributeDictionary_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__srv__AttributeDictionary_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: attribute_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: attribute_val
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__srv__AttributeDictionary_Request;
    is_plain =
      (
      offsetof(DataType, attribute_val) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AttributeDictionary_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__srv__AttributeDictionary_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AttributeDictionary_Request = {
  "autodrive_msgs::srv",
  "AttributeDictionary_Request",
  _AttributeDictionary_Request__cdr_serialize,
  _AttributeDictionary_Request__cdr_deserialize,
  _AttributeDictionary_Request__get_serialized_size,
  _AttributeDictionary_Request__max_serialized_size
};

static rosidl_message_type_support_t _AttributeDictionary_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AttributeDictionary_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, AttributeDictionary_Request)() {
  return &_AttributeDictionary_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__struct.h"
// already included above
// #include "autodrive_msgs/srv/detail/attribute_dictionary__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // lanelet_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // lanelet_ids
// already included above
// #include "rosidl_runtime_c/string.h"  // error_msg
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_msg

// forward declare type support functions


using _AttributeDictionary_Response__ros_msg_type = autodrive_msgs__srv__AttributeDictionary_Response;

static bool _AttributeDictionary_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AttributeDictionary_Response__ros_msg_type * ros_message = static_cast<const _AttributeDictionary_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lanelet_ids
  {
    size_t size = ros_message->lanelet_ids.size;
    auto array_ptr = ros_message->lanelet_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->error_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error
  {
    cdr << (ros_message->error ? true : false);
  }

  return true;
}

static bool _AttributeDictionary_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AttributeDictionary_Response__ros_msg_type * ros_message = static_cast<_AttributeDictionary_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lanelet_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lanelet_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->lanelet_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->lanelet_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lanelet_ids'");
      return false;
    }
    auto array_ptr = ros_message->lanelet_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->error_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_msg'\n");
      return false;
    }
  }

  // Field name: error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__srv__AttributeDictionary_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AttributeDictionary_Response__ros_msg_type * ros_message = static_cast<const _AttributeDictionary_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lanelet_ids
  {
    size_t array_size = ros_message->lanelet_ids.size;
    auto array_ptr = ros_message->lanelet_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_msg.size + 1);
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AttributeDictionary_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__srv__AttributeDictionary_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__srv__AttributeDictionary_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: lanelet_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__srv__AttributeDictionary_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AttributeDictionary_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__srv__AttributeDictionary_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AttributeDictionary_Response = {
  "autodrive_msgs::srv",
  "AttributeDictionary_Response",
  _AttributeDictionary_Response__cdr_serialize,
  _AttributeDictionary_Response__cdr_deserialize,
  _AttributeDictionary_Response__get_serialized_size,
  _AttributeDictionary_Response__max_serialized_size
};

static rosidl_message_type_support_t _AttributeDictionary_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AttributeDictionary_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, AttributeDictionary_Response)() {
  return &_AttributeDictionary_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/srv/attribute_dictionary.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AttributeDictionary__callbacks = {
  "autodrive_msgs::srv",
  "AttributeDictionary",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, AttributeDictionary_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, AttributeDictionary_Response)(),
};

static rosidl_service_type_support_t AttributeDictionary__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AttributeDictionary__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, AttributeDictionary)() {
  return &AttributeDictionary__handle;
}

#if defined(__cplusplus)
}
#endif
