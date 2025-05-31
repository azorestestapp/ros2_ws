# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/MPCControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MPCControl(type):
    """Metaclass of message 'MPCControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autodrive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autodrive_msgs.msg.MPCControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_control

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MPCControl(metaclass=Metaclass_MPCControl):
    """Message class 'MPCControl'."""

    __slots__ = [
        '_header',
        '_duration',
        '_steering_angle_1',
        '_steering_angle_2',
        '_steering_angle_3',
        '_accel_1',
        '_accel_2',
        '_accel_3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'duration': 'double',
        'steering_angle_1': 'double',
        'steering_angle_2': 'double',
        'steering_angle_3': 'double',
        'accel_1': 'double',
        'accel_2': 'double',
        'accel_3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.duration = kwargs.get('duration', float())
        self.steering_angle_1 = kwargs.get('steering_angle_1', float())
        self.steering_angle_2 = kwargs.get('steering_angle_2', float())
        self.steering_angle_3 = kwargs.get('steering_angle_3', float())
        self.accel_1 = kwargs.get('accel_1', float())
        self.accel_2 = kwargs.get('accel_2', float())
        self.accel_3 = kwargs.get('accel_3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.duration != other.duration:
            return False
        if self.steering_angle_1 != other.steering_angle_1:
            return False
        if self.steering_angle_2 != other.steering_angle_2:
            return False
        if self.steering_angle_3 != other.steering_angle_3:
            return False
        if self.accel_1 != other.accel_1:
            return False
        if self.accel_2 != other.accel_2:
            return False
        if self.accel_3 != other.accel_3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration = value

    @builtins.property
    def steering_angle_1(self):
        """Message field 'steering_angle_1'."""
        return self._steering_angle_1

    @steering_angle_1.setter
    def steering_angle_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle_1 = value

    @builtins.property
    def steering_angle_2(self):
        """Message field 'steering_angle_2'."""
        return self._steering_angle_2

    @steering_angle_2.setter
    def steering_angle_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle_2 = value

    @builtins.property
    def steering_angle_3(self):
        """Message field 'steering_angle_3'."""
        return self._steering_angle_3

    @steering_angle_3.setter
    def steering_angle_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle_3 = value

    @builtins.property
    def accel_1(self):
        """Message field 'accel_1'."""
        return self._accel_1

    @accel_1.setter
    def accel_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_1 = value

    @builtins.property
    def accel_2(self):
        """Message field 'accel_2'."""
        return self._accel_2

    @accel_2.setter
    def accel_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_2 = value

    @builtins.property
    def accel_3(self):
        """Message field 'accel_3'."""
        return self._accel_3

    @accel_3.setter
    def accel_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_3 = value
