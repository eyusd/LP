// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from policy_translation:srv/NetworkPT.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "policy_translation/srv/network_pt__struct.h"
#include "policy_translation/srv/network_pt__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool policy_translation__srv__network_pt__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp(
        "policy_translation.srv._network_pt.NetworkPT_Request",
        full_classname_dest, 52) == 0);
  }
  policy_translation__srv__NetworkPT_Request * ros_message = _ros_message;
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // language
    PyObject * field = PyObject_GetAttrString(_pymsg, "language");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->language, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robot'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__float__Sequence__init(&(ros_message->robot), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    float * dest = ros_message->robot.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      float tmp = (float)PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // plot
    PyObject * field = PyObject_GetAttrString(_pymsg, "plot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plot = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * policy_translation__srv__network_pt__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NetworkPT_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("policy_translation.srv._network_pt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NetworkPT_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  policy_translation__srv__NetworkPT_Request * ros_message = (policy_translation__srv__NetworkPT_Request *)raw_ros_message;
  {  // image
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // language
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->language.data,
      strlen(ros_message->language.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "language", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "robot");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->robot.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->robot.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->robot.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->plot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "policy_translation/srv/network_pt__struct.h"
// already included above
// #include "policy_translation/srv/network_pt__functions.h"

// already included above
// #include "rosidl_generator_c/primitives_sequence.h"
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool policy_translation__srv__network_pt__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp(
        "policy_translation.srv._network_pt.NetworkPT_Response",
        full_classname_dest, 53) == 0);
  }
  policy_translation__srv__NetworkPT_Response * ros_message = _ros_message;
  {  // trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__float__Sequence__init(&(ros_message->trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    float * dest = ros_message->trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      float tmp = (float)PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'confidence'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__float__Sequence__init(&(ros_message->confidence), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    float * dest = ros_message->confidence.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      float tmp = (float)PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // timesteps
    PyObject * field = PyObject_GetAttrString(_pymsg, "timesteps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timesteps = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // weights
    PyObject * field = PyObject_GetAttrString(_pymsg, "weights");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'weights'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__float__Sequence__init(&(ros_message->weights), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    float * dest = ros_message->weights.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      float tmp = (float)PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * policy_translation__srv__network_pt__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NetworkPT_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("policy_translation.srv._network_pt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NetworkPT_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  policy_translation__srv__NetworkPT_Response * ros_message = (policy_translation__srv__NetworkPT_Response *)raw_ros_message;
  {  // trajectory
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "trajectory");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->trajectory.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->trajectory.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->trajectory.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "confidence");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->confidence.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->confidence.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->confidence.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // timesteps
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->timesteps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timesteps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weights
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "weights");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->weights.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->weights.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->weights.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
