// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__SharedPointerReference __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__SharedPointerReference __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SharedPointerReference_
{
  using Type = SharedPointerReference_<ContainerAllocator>;

  explicit SharedPointerReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shared_pointer_key = "";
      this->map_active = false;
      this->graph_active = false;
    }
  }

  explicit SharedPointerReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shared_pointer_key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shared_pointer_key = "";
      this->map_active = false;
      this->graph_active = false;
    }
  }

  // field types and members
  using _shared_pointer_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shared_pointer_key_type shared_pointer_key;
  using _map_active_type =
    bool;
  _map_active_type map_active;
  using _graph_active_type =
    bool;
  _graph_active_type graph_active;

  // setters for named parameter idiom
  Type & set__shared_pointer_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shared_pointer_key = _arg;
    return *this;
  }
  Type & set__map_active(
    const bool & _arg)
  {
    this->map_active = _arg;
    return *this;
  }
  Type & set__graph_active(
    const bool & _arg)
  {
    this->graph_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__SharedPointerReference
    std::shared_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__SharedPointerReference
    std::shared_ptr<autodrive_msgs::msg::SharedPointerReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SharedPointerReference_ & other) const
  {
    if (this->shared_pointer_key != other.shared_pointer_key) {
      return false;
    }
    if (this->map_active != other.map_active) {
      return false;
    }
    if (this->graph_active != other.graph_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const SharedPointerReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SharedPointerReference_

// alias to use template instance with default allocator
using SharedPointerReference =
  autodrive_msgs::msg::SharedPointerReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__STRUCT_HPP_
