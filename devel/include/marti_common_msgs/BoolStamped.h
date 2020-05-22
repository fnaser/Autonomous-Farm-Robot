// Generated by gencpp from file marti_common_msgs/BoolStamped.msg
// DO NOT EDIT!


#ifndef MARTI_COMMON_MSGS_MESSAGE_BOOLSTAMPED_H
#define MARTI_COMMON_MSGS_MESSAGE_BOOLSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_common_msgs
{
template <class ContainerAllocator>
struct BoolStamped_
{
  typedef BoolStamped_<ContainerAllocator> Type;

  BoolStamped_()
    : header()
    , value(false)  {
    }
  BoolStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , value(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::marti_common_msgs::BoolStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_common_msgs::BoolStamped_<ContainerAllocator> const> ConstPtr;

}; // struct BoolStamped_

typedef ::marti_common_msgs::BoolStamped_<std::allocator<void> > BoolStamped;

typedef boost::shared_ptr< ::marti_common_msgs::BoolStamped > BoolStampedPtr;
typedef boost::shared_ptr< ::marti_common_msgs::BoolStamped const> BoolStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_common_msgs::BoolStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_common_msgs::BoolStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::BoolStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_common_msgs::BoolStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::BoolStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::BoolStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::BoolStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::BoolStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a502021a9e661290bab60c5754fb8cd";
  }

  static const char* value(const ::marti_common_msgs::BoolStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a502021a9e66129ULL;
  static const uint64_t static_value2 = 0x0bab60c5754fb8cdULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_common_msgs/BoolStamped";
  }

  static const char* value(const ::marti_common_msgs::BoolStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"bool   value\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::marti_common_msgs::BoolStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoolStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_common_msgs::BoolStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_common_msgs::BoolStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_COMMON_MSGS_MESSAGE_BOOLSTAMPED_H
