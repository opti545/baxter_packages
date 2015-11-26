# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from baxter_core_msgs/HeadState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class HeadState(genpy.Message):
  _md5sum = "a7a905cb9138493d35f02b3c35b9d65b"
  _type = "baxter_core_msgs/HeadState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 pan
bool isPanning
bool isNodding

"""
  __slots__ = ['pan','isPanning','isNodding']
  _slot_types = ['float32','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pan,isPanning,isNodding

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HeadState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pan is None:
        self.pan = 0.
      if self.isPanning is None:
        self.isPanning = False
      if self.isNodding is None:
        self.isNodding = False
    else:
      self.pan = 0.
      self.isPanning = False
      self.isNodding = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_f2B.pack(_x.pan, _x.isPanning, _x.isNodding))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 6
      (_x.pan, _x.isPanning, _x.isNodding,) = _struct_f2B.unpack(str[start:end])
      self.isPanning = bool(self.isPanning)
      self.isNodding = bool(self.isNodding)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_f2B.pack(_x.pan, _x.isPanning, _x.isNodding))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 6
      (_x.pan, _x.isPanning, _x.isNodding,) = _struct_f2B.unpack(str[start:end])
      self.isPanning = bool(self.isPanning)
      self.isNodding = bool(self.isNodding)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_f2B = struct.Struct("<f2B")