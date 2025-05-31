# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/TrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'corresponding_lane'
# Member 'associated_light'
# Member 'associated_stop_line'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLight(type):
    """Metaclass of message 'TrafficLight'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'RED': 1,
        'YELLOW': 2,
        'GREEN': 3,
        'THREE_BULB': 0,
        'FOUR_BULB': 1,
        'DOGHOUSE': 2,
        'TRIANGLE': 3,
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
                'autodrive_msgs.msg.TrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light

            from autodrive_msgs.msg import GeneralDetection
            if GeneralDetection.__class__._TYPE_SUPPORT is None:
                GeneralDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'RED': cls.__constants['RED'],
            'YELLOW': cls.__constants['YELLOW'],
            'GREEN': cls.__constants['GREEN'],
            'THREE_BULB': cls.__constants['THREE_BULB'],
            'FOUR_BULB': cls.__constants['FOUR_BULB'],
            'DOGHOUSE': cls.__constants['DOGHOUSE'],
            'TRIANGLE': cls.__constants['TRIANGLE'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_TrafficLight.__constants['OFF']

    @property
    def RED(self):
        """Message constant 'RED'."""
        return Metaclass_TrafficLight.__constants['RED']

    @property
    def YELLOW(self):
        """Message constant 'YELLOW'."""
        return Metaclass_TrafficLight.__constants['YELLOW']

    @property
    def GREEN(self):
        """Message constant 'GREEN'."""
        return Metaclass_TrafficLight.__constants['GREEN']

    @property
    def THREE_BULB(self):
        """Message constant 'THREE_BULB'."""
        return Metaclass_TrafficLight.__constants['THREE_BULB']

    @property
    def FOUR_BULB(self):
        """Message constant 'FOUR_BULB'."""
        return Metaclass_TrafficLight.__constants['FOUR_BULB']

    @property
    def DOGHOUSE(self):
        """Message constant 'DOGHOUSE'."""
        return Metaclass_TrafficLight.__constants['DOGHOUSE']

    @property
    def TRIANGLE(self):
        """Message constant 'TRIANGLE'."""
        return Metaclass_TrafficLight.__constants['TRIANGLE']


class TrafficLight(metaclass=Metaclass_TrafficLight):
    """
    Message class 'TrafficLight'.

    Constants:
      OFF
      RED
      YELLOW
      GREEN
      THREE_BULB
      FOUR_BULB
      DOGHOUSE
      TRIANGLE
    """

    __slots__ = [
        '_detection',
        '_corresponding_lane',
        '_associated_light',
        '_associated_stop_line',
        '_main_bulb',
        '_main_bulb_confidence',
        '_left_turn',
        '_left_bulb_confidence',
        '_right_turn',
        '_right_bulb_confidence',
        '_flashing',
        '_shape_category',
        '_shape_confidence',
    ]

    _fields_and_field_types = {
        'detection': 'autodrive_msgs/GeneralDetection',
        'corresponding_lane': 'sequence<uint64>',
        'associated_light': 'sequence<uint64>',
        'associated_stop_line': 'sequence<uint64>',
        'main_bulb': 'int8',
        'main_bulb_confidence': 'float',
        'left_turn': 'int8',
        'left_bulb_confidence': 'float',
        'right_turn': 'int8',
        'right_bulb_confidence': 'float',
        'flashing': 'boolean',
        'shape_category': 'int8',
        'shape_confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autodrive_msgs', 'msg'], 'GeneralDetection'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autodrive_msgs.msg import GeneralDetection
        self.detection = kwargs.get('detection', GeneralDetection())
        self.corresponding_lane = array.array('Q', kwargs.get('corresponding_lane', []))
        self.associated_light = array.array('Q', kwargs.get('associated_light', []))
        self.associated_stop_line = array.array('Q', kwargs.get('associated_stop_line', []))
        self.main_bulb = kwargs.get('main_bulb', int())
        self.main_bulb_confidence = kwargs.get('main_bulb_confidence', float())
        self.left_turn = kwargs.get('left_turn', int())
        self.left_bulb_confidence = kwargs.get('left_bulb_confidence', float())
        self.right_turn = kwargs.get('right_turn', int())
        self.right_bulb_confidence = kwargs.get('right_bulb_confidence', float())
        self.flashing = kwargs.get('flashing', bool())
        self.shape_category = kwargs.get('shape_category', int())
        self.shape_confidence = kwargs.get('shape_confidence', float())

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
        if self.associated_light != other.associated_light:
            return False
        if self.associated_stop_line != other.associated_stop_line:
            return False
        if self.main_bulb != other.main_bulb:
            return False
        if self.main_bulb_confidence != other.main_bulb_confidence:
            return False
        if self.left_turn != other.left_turn:
            return False
        if self.left_bulb_confidence != other.left_bulb_confidence:
            return False
        if self.right_turn != other.right_turn:
            return False
        if self.right_bulb_confidence != other.right_bulb_confidence:
            return False
        if self.flashing != other.flashing:
            return False
        if self.shape_category != other.shape_category:
            return False
        if self.shape_confidence != other.shape_confidence:
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
    def associated_light(self):
        """Message field 'associated_light'."""
        return self._associated_light

    @associated_light.setter
    def associated_light(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'associated_light' array.array() must have the type code of 'Q'"
            self._associated_light = value
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
                "The 'associated_light' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._associated_light = array.array('Q', value)

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
    def main_bulb(self):
        """Message field 'main_bulb'."""
        return self._main_bulb

    @main_bulb.setter
    def main_bulb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_bulb' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'main_bulb' field must be an integer in [-128, 127]"
        self._main_bulb = value

    @builtins.property
    def main_bulb_confidence(self):
        """Message field 'main_bulb_confidence'."""
        return self._main_bulb_confidence

    @main_bulb_confidence.setter
    def main_bulb_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'main_bulb_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'main_bulb_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._main_bulb_confidence = value

    @builtins.property
    def left_turn(self):
        """Message field 'left_turn'."""
        return self._left_turn

    @left_turn.setter
    def left_turn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_turn' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left_turn' field must be an integer in [-128, 127]"
        self._left_turn = value

    @builtins.property
    def left_bulb_confidence(self):
        """Message field 'left_bulb_confidence'."""
        return self._left_bulb_confidence

    @left_bulb_confidence.setter
    def left_bulb_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_bulb_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_bulb_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_bulb_confidence = value

    @builtins.property
    def right_turn(self):
        """Message field 'right_turn'."""
        return self._right_turn

    @right_turn.setter
    def right_turn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_turn' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right_turn' field must be an integer in [-128, 127]"
        self._right_turn = value

    @builtins.property
    def right_bulb_confidence(self):
        """Message field 'right_bulb_confidence'."""
        return self._right_bulb_confidence

    @right_bulb_confidence.setter
    def right_bulb_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_bulb_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_bulb_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_bulb_confidence = value

    @builtins.property
    def flashing(self):
        """Message field 'flashing'."""
        return self._flashing

    @flashing.setter
    def flashing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flashing' field must be of type 'bool'"
        self._flashing = value

    @builtins.property
    def shape_category(self):
        """Message field 'shape_category'."""
        return self._shape_category

    @shape_category.setter
    def shape_category(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shape_category' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'shape_category' field must be an integer in [-128, 127]"
        self._shape_category = value

    @builtins.property
    def shape_confidence(self):
        """Message field 'shape_confidence'."""
        return self._shape_confidence

    @shape_confidence.setter
    def shape_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'shape_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'shape_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._shape_confidence = value
