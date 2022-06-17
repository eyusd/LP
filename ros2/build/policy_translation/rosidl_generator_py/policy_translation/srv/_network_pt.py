# generated from rosidl_generator_py/resource/_idl.py.em
# with input from policy_translation:srv/NetworkPT.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'robot'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NetworkPT_Request(type):
    """Metaclass of message 'NetworkPT_Request'."""

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
            module = import_type_support('policy_translation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'policy_translation.srv.NetworkPT_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__network_pt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__network_pt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__network_pt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__network_pt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__network_pt__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NetworkPT_Request(metaclass=Metaclass_NetworkPT_Request):
    """Message class 'NetworkPT_Request'."""

    __slots__ = [
        '_image',
        '_language',
        '_robot',
        '_reset',
        '_plot',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
        'language': 'string',
        'robot': 'sequence<float>',
        'reset': 'boolean',
        'plot': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.language = kwargs.get('language', str())
        self.robot = array.array('f', kwargs.get('robot', []))
        self.reset = kwargs.get('reset', bool())
        self.plot = kwargs.get('plot', bool())

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
        if self.image != other.image:
            return False
        if self.language != other.language:
            return False
        if self.robot != other.robot:
            return False
        if self.reset != other.reset:
            return False
        if self.plot != other.plot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @property
    def language(self):
        """Message field 'language'."""
        return self._language

    @language.setter
    def language(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'language' field must be of type 'str'"
        self._language = value

    @property
    def robot(self):
        """Message field 'robot'."""
        return self._robot

    @robot.setter
    def robot(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'robot' array.array() must have the type code of 'f'"
            self._robot = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'robot' field must be a set or sequence and each value of type 'float'"
        self._robot = array.array('f', value)

    @property
    def reset(self):
        """Message field 'reset'."""
        return self._reset

    @reset.setter
    def reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset' field must be of type 'bool'"
        self._reset = value

    @property
    def plot(self):
        """Message field 'plot'."""
        return self._plot

    @plot.setter
    def plot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plot' field must be of type 'bool'"
        self._plot = value


# Import statements for member types

# Member 'trajectory'
# Member 'confidence'
# Member 'weights'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_NetworkPT_Response(type):
    """Metaclass of message 'NetworkPT_Response'."""

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
            module = import_type_support('policy_translation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'policy_translation.srv.NetworkPT_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__network_pt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__network_pt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__network_pt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__network_pt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__network_pt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NetworkPT_Response(metaclass=Metaclass_NetworkPT_Response):
    """Message class 'NetworkPT_Response'."""

    __slots__ = [
        '_trajectory',
        '_confidence',
        '_timesteps',
        '_weights',
        '_phase',
    ]

    _fields_and_field_types = {
        'trajectory': 'sequence<float>',
        'confidence': 'sequence<float>',
        'timesteps': 'int32',
        'weights': 'sequence<float>',
        'phase': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectory = array.array('f', kwargs.get('trajectory', []))
        self.confidence = array.array('f', kwargs.get('confidence', []))
        self.timesteps = kwargs.get('timesteps', int())
        self.weights = array.array('f', kwargs.get('weights', []))
        self.phase = kwargs.get('phase', float())

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
        if self.trajectory != other.trajectory:
            return False
        if self.confidence != other.confidence:
            return False
        if self.timesteps != other.timesteps:
            return False
        if self.weights != other.weights:
            return False
        if self.phase != other.phase:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'trajectory' array.array() must have the type code of 'f'"
            self._trajectory = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'trajectory' field must be a set or sequence and each value of type 'float'"
        self._trajectory = array.array('f', value)

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'confidence' array.array() must have the type code of 'f'"
            self._confidence = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'confidence' field must be a set or sequence and each value of type 'float'"
        self._confidence = array.array('f', value)

    @property
    def timesteps(self):
        """Message field 'timesteps'."""
        return self._timesteps

    @timesteps.setter
    def timesteps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timesteps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timesteps' field must be an integer in [-2147483648, 2147483647]"
        self._timesteps = value

    @property
    def weights(self):
        """Message field 'weights'."""
        return self._weights

    @weights.setter
    def weights(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'weights' array.array() must have the type code of 'f'"
            self._weights = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'weights' field must be a set or sequence and each value of type 'float'"
        self._weights = array.array('f', value)

    @property
    def phase(self):
        """Message field 'phase'."""
        return self._phase

    @phase.setter
    def phase(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'phase' field must be of type 'float'"
        self._phase = value


class Metaclass_NetworkPT(type):
    """Metaclass of service 'NetworkPT'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('policy_translation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'policy_translation.srv.NetworkPT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__network_pt

            from policy_translation.srv import _network_pt
            if _network_pt.Metaclass_NetworkPT_Request._TYPE_SUPPORT is None:
                _network_pt.Metaclass_NetworkPT_Request.__import_type_support__()
            if _network_pt.Metaclass_NetworkPT_Response._TYPE_SUPPORT is None:
                _network_pt.Metaclass_NetworkPT_Response.__import_type_support__()


class NetworkPT(metaclass=Metaclass_NetworkPT):
    from policy_translation.srv._network_pt import NetworkPT_Request as Request
    from policy_translation.srv._network_pt import NetworkPT_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
