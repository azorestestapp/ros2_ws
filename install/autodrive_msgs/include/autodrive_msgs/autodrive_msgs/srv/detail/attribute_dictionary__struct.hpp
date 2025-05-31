// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Request __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Request __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttributeDictionary_Request_
{
  using Type = AttributeDictionary_Request_<ContainerAllocator>;

  explicit AttributeDictionary_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attribute_key = "";
      this->attribute_val = "";
    }
  }

  explicit AttributeDictionary_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : attribute_key(_alloc),
    attribute_val(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attribute_key = "";
      this->attribute_val = "";
    }
  }

  // field types and members
  using _attribute_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _attribute_key_type attribute_key;
  using _attribute_val_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _attribute_val_type attribute_val;

  // setters for named parameter idiom
  Type & set__attribute_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->attribute_key = _arg;
    return *this;
  }
  Type & set__attribute_val(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->attribute_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Request
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Request
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttributeDictionary_Request_ & other) const
  {
    if (this->attribute_key != other.attribute_key) {
      return false;
    }
    if (this->attribute_val != other.attribute_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttributeDictionary_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttributeDictionary_Request_

// alias to use template instance with default allocator
using AttributeDictionary_Request =
  autodrive_msgs::srv::AttributeDictionary_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Response __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Response __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttributeDictionary_Response_
{
  using Type = AttributeDictionary_Response_<ContainerAllocator>;

  explicit AttributeDictionary_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
      this->error = false;
    }
  }

  explicit AttributeDictionary_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
      this->error = false;
    }
  }

  // field types and members
  using _lanelet_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _lanelet_ids_type lanelet_ids;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;
  using _error_type =
    bool;
  _error_type error;

  // setters for named parameter idiom
  Type & set__lanelet_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->lanelet_ids = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Response
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__AttributeDictionary_Response
    std::shared_ptr<autodrive_msgs::srv::AttributeDictionary_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttributeDictionary_Response_ & other) const
  {
    if (this->lanelet_ids != other.lanelet_ids) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttributeDictionary_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttributeDictionary_Response_

// alias to use template instance with default allocator
using AttributeDictionary_Response =
  autodrive_msgs::srv::AttributeDictionary_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs

namespace autodrive_msgs
{

namespace srv
{

struct AttributeDictionary
{
  using Request = autodrive_msgs::srv::AttributeDictionary_Request;
  using Response = autodrive_msgs::srv::AttributeDictionary_Response;
};

}  // namespace srv

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__STRUCT_HPP_
