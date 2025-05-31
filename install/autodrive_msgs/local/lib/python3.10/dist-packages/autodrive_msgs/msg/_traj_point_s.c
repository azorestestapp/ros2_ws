// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:msg/TrajPoint.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "autodrive_msgs/msg/detail/traj_point__struct.h"
#include "autodrive_msgs/msg/detail/traj_point__functions.h"

bool autodrive_msgs__msg__direction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__direction__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__msg__traj_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("autodrive_msgs.msg._traj_point.TrajPoint", full_classname_dest, 40) == 0);
  }
  autodrive_msgs__msg__TrajPoint * ros_message = _ros_message;
  {  // east
    PyObject * field = PyObject_GetAttrString(_pymsg, "east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north
    PyObject * field = PyObject_GetAttrString(_pymsg, "north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lanelet_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanelet_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanelet_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    if (!autodrive_msgs__msg__direction__convert_from_py(field, &ros_message->direction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__msg__traj_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.msg._traj_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__msg__TrajPoint * ros_message = (autodrive_msgs__msg__TrajPoint *)raw_ros_message;
  {  // east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanelet_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lanelet_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanelet_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = autodrive_msgs__msg__direction__convert_to_py(&ros_message->direction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
