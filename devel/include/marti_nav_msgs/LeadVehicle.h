// Generated by gencpp from file marti_nav_msgs/LeadVehicle.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_LEADVEHICLE_H
#define MARTI_NAV_MSGS_MESSAGE_LEADVEHICLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct LeadVehicle_
{
  typedef LeadVehicle_<ContainerAllocator> Type;

  LeadVehicle_()
    : header()
    , headwayDistance(0.0)
    , speed(0.0)
    , heading(0.0)
    , xPos(0.0)
    , yPos(0.0)
    , classification(0)
    , type(0)  {
    }
  LeadVehicle_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , headwayDistance(0.0)
    , speed(0.0)
    , heading(0.0)
    , xPos(0.0)
    , yPos(0.0)
    , classification(0)
    , type(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _headwayDistance_type;
  _headwayDistance_type headwayDistance;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _heading_type;
  _heading_type heading;

   typedef float _xPos_type;
  _xPos_type xPos;

   typedef float _yPos_type;
  _yPos_type yPos;

   typedef int8_t _classification_type;
  _classification_type classification;

   typedef int8_t _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> const> ConstPtr;

}; // struct LeadVehicle_

typedef ::marti_nav_msgs::LeadVehicle_<std::allocator<void> > LeadVehicle;

typedef boost::shared_ptr< ::marti_nav_msgs::LeadVehicle > LeadVehiclePtr;
typedef boost::shared_ptr< ::marti_nav_msgs::LeadVehicle const> LeadVehicleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.headwayDistance == rhs.headwayDistance &&
    lhs.speed == rhs.speed &&
    lhs.heading == rhs.heading &&
    lhs.xPos == rhs.xPos &&
    lhs.yPos == rhs.yPos &&
    lhs.classification == rhs.classification &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "123a04e085bfddd727efd0e68809c765";
  }

  static const char* value(const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x123a04e085bfddd7ULL;
  static const uint64_t static_value2 = 0x27efd0e68809c765ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/LeadVehicle";
  }

  static const char* value(const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float32 headwayDistance\n"
"float32 speed\n"
"float32 heading\n"
"float32 xPos\n"
"float32 yPos\n"
"int8 classification\n"
"int8 type\n"
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

  static const char* value(const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.headwayDistance);
      stream.next(m.speed);
      stream.next(m.heading);
      stream.next(m.xPos);
      stream.next(m.yPos);
      stream.next(m.classification);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LeadVehicle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::LeadVehicle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::LeadVehicle_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "headwayDistance: ";
    Printer<float>::stream(s, indent + "  ", v.headwayDistance);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "heading: ";
    Printer<float>::stream(s, indent + "  ", v.heading);
    s << indent << "xPos: ";
    Printer<float>::stream(s, indent + "  ", v.xPos);
    s << indent << "yPos: ";
    Printer<float>::stream(s, indent + "  ", v.yPos);
    s << indent << "classification: ";
    Printer<int8_t>::stream(s, indent + "  ", v.classification);
    s << indent << "type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_LEADVEHICLE_H
