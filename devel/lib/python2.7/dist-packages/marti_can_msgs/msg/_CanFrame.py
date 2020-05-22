# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_can_msgs/CanFrame.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class CanFrame(genpy.Message):
  _md5sum = "c60d055845d0e93bcf7d8d8dca084be7"
  _type = "marti_can_msgs/CanFrame"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
# Header timestamp is the time when all messages were acquired
# and synchronized.

uint32 ID
# CAN Message ID - This is 11 bits for standard frames or 29 bits for
# extended frames.

uint8 msg_type	  
# CAN Message Type.  This should be one of the constants defined
# below.  (Constants used to match pcan.h from Peak's driver.)
uint8 MSGTYPE_STANDARD = 0
uint8 MSGTYPE_RTR = 1
uint8 MSGTYPE_EXTENDED = 2
uint8 MSGTYPE_STATUS = 128

uint8 data_length
# Count of data bytes (0..8)

uint8[8] data
# Data bytes, up to 8

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  # Pseudo-constants
  MSGTYPE_STANDARD = 0
  MSGTYPE_RTR = 1
  MSGTYPE_EXTENDED = 2
  MSGTYPE_STATUS = 128

  __slots__ = ['header','ID','msg_type','data_length','data']
  _slot_types = ['std_msgs/Header','uint32','uint8','uint8','uint8[8]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ID,msg_type,data_length,data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CanFrame, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ID is None:
        self.ID = 0
      if self.msg_type is None:
        self.msg_type = 0
      if self.data_length is None:
        self.data_length = 0
      if self.data is None:
        self.data = b'\0'*8
    else:
      self.header = std_msgs.msg.Header()
      self.ID = 0
      self.msg_type = 0
      self.data_length = 0
      self.data = b'\0'*8

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_I2B().pack(_x.ID, _x.msg_type, _x.data_length))
      _x = self.data
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_8B().pack(*_x))
      else:
        buff.write(_get_struct_8s().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.ID, _x.msg_type, _x.data_length,) = _get_struct_I2B().unpack(str[start:end])
      start = end
      end += 8
      self.data = str[start:end]
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_I2B().pack(_x.ID, _x.msg_type, _x.data_length))
      _x = self.data
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_8B().pack(*_x))
      else:
        buff.write(_get_struct_8s().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.ID, _x.msg_type, _x.data_length,) = _get_struct_I2B().unpack(str[start:end])
      start = end
      end += 8
      self.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8B = None
def _get_struct_8B():
    global _struct_8B
    if _struct_8B is None:
        _struct_8B = struct.Struct("<8B")
    return _struct_8B
_struct_8s = None
def _get_struct_8s():
    global _struct_8s
    if _struct_8s is None:
        _struct_8s = struct.Struct("<8s")
    return _struct_8s
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_I2B = None
def _get_struct_I2B():
    global _struct_I2B
    if _struct_I2B is None:
        _struct_I2B = struct.Struct("<I2B")
    return _struct_I2B
