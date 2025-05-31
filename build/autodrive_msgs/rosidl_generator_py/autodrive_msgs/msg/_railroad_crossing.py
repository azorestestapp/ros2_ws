# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/RailroadCrossing.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RailroadCrossing(type):
    """Metaclass of message 'RailroadCrossing'."""

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
                'autodrive_msgs.msg.RailroadCrossing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__railroad_crossing
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__railroad_crossing
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__railroad_crossing
            cls._TYPE_SUPPORT = module.type_support_msg__msg__railroad_crossing
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__railroad_crossing

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RailroadCrossing(metaclass=Metaclass_RailroadCrossing):
    """Message class 'RailroadCrossing'."""

    __slots__ = [
        '_detection',
        '_bar',
        '_active',
        '_bar_activity_confidence',
        '_railroad_sign',
        '_stop_line',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'bar': 'uint64',
        'active': 'boolean',
        'bar_activity_confidence': 'float',
        'railroad_sign': 'uint64',
        'stop_line': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autodrive_msgs.msg import GeneralDetection
        self.detection = kwargs.get('detection', GeneralDetection())
        self.bar = kwargs.get('bar', int())
        self.active = kwargs.get('active', bool())
        self.bar_activity_confidence = kwargs.get('bar_activity_confidence', float())
        self.railroad_sign = kwargs.get('railroad_sign', int())
        self.stop_line = kwargs.get('stop_line', int())

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
        if self.detection != other.detection:
            return False
        if self.bar != other.bar:
            return False
        if self.active != other.active:
            return False
        if self.bar_activity_confidence != other.bar_activity_confidence:
            return False
        if self.railroad_sign != other.railroad_sign:
            return False
        if self.stop_line != other.stop_line:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detection(self):
        """Message field 'detection'."""
        return self._detection

    @detection.setter
    def detection(self, value):
        if __debug__:
            from autodrive_msgs.msg import GeneralDetection
            assert \
                isinstance(value, GeneralDetection), \
                "The 'detection' field must be a sub message of type 'GeneralDetection'"
        self._detection = value

    @builtins.property
    def bar(self):
        """Message field 'bar'."""
        return self._bar

    @bar.setter
    def bar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bar' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'bar' field must be an unsigned integer in [0, 18446744073709551615]"
        self._bar = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def bar_activity_confidence(self):
        """Message field 'bar_activity_confidence'."""
        return self._bar_activity_confidence

    @bar_activity_confidence.setter
    def bar_activity_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bar_activity_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bar_activity_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bar_activity_confidence = value

    @builtins.property
    def railroad_sign(self):
        """Message field 'railroad_sign'."""
        return self._railroad_sign

    @railroad_sign.setter
    def railroad_sign(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'railroad_sign' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'railroad_sign' field must be an unsigned integer in [0, 18446744073709551615]"
        self._railroad_sign = value

    @builtins.property
    def stop_line(self):
        """Message field 'stop_line'."""
        return self._stop_line

    @stop_line.setter
    def stop_line(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_line' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'stop_line' field must be an unsigned integer in [0, 18446744073709551615]"
        self._stop_line = value
