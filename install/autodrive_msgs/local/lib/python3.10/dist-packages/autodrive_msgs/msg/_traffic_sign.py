# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/TrafficSign.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'corresponding_lane'
# Member 'associated_sign'
# Member 'associated_stop_line'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficSign(type):
    """Metaclass of message 'TrafficSign'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': 0,
        'YIELD': 1,
        'DO_NOT_ENTER': 2,
        'NO_LEFT': 3,
        'NO_STRAIGHT': 4,
        'NO_U_TURN': 5,
        'NO_RIGHT_ON_RED': 6,
        'RAILWAY_CROSSING': 7,
        'ONE_WAY': 8,
        'ROAD_CLOSED': 9,
        'NO_RIGHT': 10,
        'OTHER': 11,
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
                'autodrive_msgs.msg.TrafficSign')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_sign
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_sign
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_sign
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_sign
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_sign

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'YIELD': cls.__constants['YIELD'],
            'DO_NOT_ENTER': cls.__constants['DO_NOT_ENTER'],
            'NO_LEFT': cls.__constants['NO_LEFT'],
            'NO_STRAIGHT': cls.__constants['NO_STRAIGHT'],
            'NO_U_TURN': cls.__constants['NO_U_TURN'],
            'NO_RIGHT_ON_RED': cls.__constants['NO_RIGHT_ON_RED'],
            'RAILWAY_CROSSING': cls.__constants['RAILWAY_CROSSING'],
            'ONE_WAY': cls.__constants['ONE_WAY'],
            'ROAD_CLOSED': cls.__constants['ROAD_CLOSED'],
            'NO_RIGHT': cls.__constants['NO_RIGHT'],
            'OTHER': cls.__constants['OTHER'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_TrafficSign.__constants['STOP']

    @property
    def YIELD(self):
        """Message constant 'YIELD'."""
        return Metaclass_TrafficSign.__constants['YIELD']

    @property
    def DO_NOT_ENTER(self):
        """Message constant 'DO_NOT_ENTER'."""
        return Metaclass_TrafficSign.__constants['DO_NOT_ENTER']

    @property
    def NO_LEFT(self):
        """Message constant 'NO_LEFT'."""
        return Metaclass_TrafficSign.__constants['NO_LEFT']

    @property
    def NO_STRAIGHT(self):
        """Message constant 'NO_STRAIGHT'."""
        return Metaclass_TrafficSign.__constants['NO_STRAIGHT']

    @property
    def NO_U_TURN(self):
        """Message constant 'NO_U_TURN'."""
        return Metaclass_TrafficSign.__constants['NO_U_TURN']

    @property
    def NO_RIGHT_ON_RED(self):
        """Message constant 'NO_RIGHT_ON_RED'."""
        return Metaclass_TrafficSign.__constants['NO_RIGHT_ON_RED']

    @property
    def RAILWAY_CROSSING(self):
        """Message constant 'RAILWAY_CROSSING'."""
        return Metaclass_TrafficSign.__constants['RAILWAY_CROSSING']

    @property
    def ONE_WAY(self):
        """Message constant 'ONE_WAY'."""
        return Metaclass_TrafficSign.__constants['ONE_WAY']

    @property
    def ROAD_CLOSED(self):
        """Message constant 'ROAD_CLOSED'."""
        return Metaclass_TrafficSign.__constants['ROAD_CLOSED']

    @property
    def NO_RIGHT(self):
        """Message constant 'NO_RIGHT'."""
        return Metaclass_TrafficSign.__constants['NO_RIGHT']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_TrafficSign.__constants['OTHER']


class TrafficSign(metaclass=Metaclass_TrafficSign):
    """
    Message class 'TrafficSign'.

    Constants:
      STOP
      YIELD
      DO_NOT_ENTER
      NO_LEFT
      NO_STRAIGHT
      NO_U_TURN
      NO_RIGHT_ON_RED
      RAILWAY_CROSSING
      ONE_WAY
      ROAD_CLOSED
      NO_RIGHT
      OTHER
    """

    __slots__ = [
        '_detection',
        '_corresponding_lane',
        '_associated_sign',
        '_associated_stop_line',
        '_sign_type',
        '_sign_type_confidence',
        '_start_time',
        '_end_time',
        '_start_day',
        '_end_day',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'corresponding_lane': 'sequence<uint64>',
        'associated_sign': 'sequence<uint64>',
        'associated_stop_line': 'sequence<uint64>',
        'sign_type': 'uint32',
        'sign_type_confidence': 'float',
        'start_time': 'uint32',
        'end_time': 'uint32',
        'start_day': 'string',
        'end_day': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autodrive_msgs.msg import GeneralDetection
        self.detection = kwargs.get('detection', GeneralDetection())
        self.corresponding_lane = array.array('Q', kwargs.get('corresponding_lane', []))
        self.associated_sign = array.array('Q', kwargs.get('associated_sign', []))
        self.associated_stop_line = array.array('Q', kwargs.get('associated_stop_line', []))
        self.sign_type = kwargs.get('sign_type', int())
        self.sign_type_confidence = kwargs.get('sign_type_confidence', float())
        self.start_time = kwargs.get('start_time', int())
        self.end_time = kwargs.get('end_time', int())
        self.start_day = kwargs.get('start_day', str())
        self.end_day = kwargs.get('end_day', str())

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
        if self.corresponding_lane != other.corresponding_lane:
            return False
        if self.associated_sign != other.associated_sign:
            return False
        if self.associated_stop_line != other.associated_stop_line:
            return False
        if self.sign_type != other.sign_type:
            return False
        if self.sign_type_confidence != other.sign_type_confidence:
            return False
        if self.start_time != other.start_time:
            return False
        if self.end_time != other.end_time:
            return False
        if self.start_day != other.start_day:
            return False
        if self.end_day != other.end_day:
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
    def corresponding_lane(self):
        """Message field 'corresponding_lane'."""
        return self._corresponding_lane

    @corresponding_lane.setter
    def corresponding_lane(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'corresponding_lane' array.array() must have the type code of 'Q'"
            self._corresponding_lane = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'corresponding_lane' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._corresponding_lane = array.array('Q', value)

    @builtins.property
    def associated_sign(self):
        """Message field 'associated_sign'."""
        return self._associated_sign

    @associated_sign.setter
    def associated_sign(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'associated_sign' array.array() must have the type code of 'Q'"
            self._associated_sign = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'associated_sign' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._associated_sign = array.array('Q', value)

    @builtins.property
    def associated_stop_line(self):
        """Message field 'associated_stop_line'."""
        return self._associated_stop_line

    @associated_stop_line.setter
    def associated_stop_line(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'associated_stop_line' array.array() must have the type code of 'Q'"
            self._associated_stop_line = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'associated_stop_line' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._associated_stop_line = array.array('Q', value)

    @builtins.property
    def sign_type(self):
        """Message field 'sign_type'."""
        return self._sign_type

    @sign_type.setter
    def sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sign_type' field must be an unsigned integer in [0, 4294967295]"
        self._sign_type = value

    @builtins.property
    def sign_type_confidence(self):
        """Message field 'sign_type_confidence'."""
        return self._sign_type_confidence

    @sign_type_confidence.setter
    def sign_type_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sign_type_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sign_type_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sign_type_confidence = value

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_time' field must be an unsigned integer in [0, 4294967295]"
        self._start_time = value

    @builtins.property
    def end_time(self):
        """Message field 'end_time'."""
        return self._end_time

    @end_time.setter
    def end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_time' field must be an unsigned integer in [0, 4294967295]"
        self._end_time = value

    @builtins.property
    def start_day(self):
        """Message field 'start_day'."""
        return self._start_day

    @start_day.setter
    def start_day(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'start_day' field must be of type 'str'"
        self._start_day = value

    @builtins.property
    def end_day(self):
        """Message field 'end_day'."""
        return self._end_day

    @end_day.setter
    def end_day(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'end_day' field must be of type 'str'"
        self._end_day = value
