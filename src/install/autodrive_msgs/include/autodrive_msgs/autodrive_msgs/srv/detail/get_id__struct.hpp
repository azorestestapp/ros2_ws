// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__GetId_Request __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__GetId_Request __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetId_Request_
{
  using Type = GetId_Request_<ContainerAllocator>;

  explicit GetId_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetId_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _east_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _east_type east;
  using _north_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _north_type north;
  using _radius_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__east(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->east = _arg;
    return *this;
  }
  Type & set__north(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->north = _arg;
    return *this;
  }
  Type & set__radius(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::GetId_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::GetId_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::GetId_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::GetId_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__GetId_Request
    std::shared_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__GetId_Request
    std::shared_ptr<autodrive_msgs::srv::GetId_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetId_Request_ & other) const
  {
    if (this->east != other.east) {
      return false;
    }
    if (this->north != other.north) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetId_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetId_Request_

// alias to use template instance with default allocator
using GetId_Request =
  autodrive_msgs::srv::GetId_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__GetId_Response __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__GetId_Response __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetId_Response_
{
  using Type = GetId_Response_<ContainerAllocator>;

  explicit GetId_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = false;
    }
  }

  explicit GetId_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = false;
    }
  }

  // field types and members
  using _error_type =
    bool;
  _error_type error;
  using _lanelet_id_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _lanelet_id_type lanelet_id;

  // setters for named parameter idiom
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::GetId_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::GetId_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::GetId_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::GetId_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__GetId_Response
    std::shared_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__GetId_Response
    std::shared_ptr<autodrive_msgs::srv::GetId_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetId_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetId_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetId_Response_

// alias to use template instance with default allocator
using GetId_Response =
  autodrive_msgs::srv::GetId_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs

namespace autodrive_msgs
{

namespace srv
{

struct GetId
{
  using Request = autodrive_msgs::srv::GetId_Request;
  using Response = autodrive_msgs::srv::GetId_Response;
};

}  // namespace srv

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__STRUCT_HPP_
