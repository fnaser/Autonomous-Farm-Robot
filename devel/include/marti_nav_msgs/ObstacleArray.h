// Generated by gencpp from file marti_nav_msgs/ObstacleArray.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_OBSTACLEARRAY_H
#define MARTI_NAV_MSGS_MESSAGE_OBSTACLEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <marti_nav_msgs/Obstacle.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct ObstacleArray_
{
  typedef ObstacleArray_<ContainerAllocator> Type;

  ObstacleArray_()
    : header()
    , obstacles()  {
    }
  ObstacleArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , obstacles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::marti_nav_msgs::Obstacle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::marti_nav_msgs::Obstacle_<ContainerAllocator> >::other >  _obstacles_type;
  _obstacles_type obstacles;





  typedef boost::shared_ptr< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> const> ConstPtr;

}; // struct ObstacleArray_

typedef ::marti_nav_msgs::ObstacleArray_<std::allocator<void> > ObstacleArray;

typedef boost::shared_ptr< ::marti_nav_msgs::ObstacleArray > ObstacleArrayPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::ObstacleArray const> ObstacleArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.obstacles == rhs.obstacles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2af80afb1cab2b611e3a96daa3ee0f01";
  }

  static const char* value(const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2af80afb1cab2b61ULL;
  static const uint64_t static_value2 = 0x1e3a96daa3ee0f01ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/ObstacleArray";
  }

  static const char* value(const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is used to communicate the position of one or more\n"
"# obstacles.\n"
"\n"
"Header header\n"
"# The header defines the frame that the obstacles are defined in.\n"
"\n"
"Obstacle[] obstacles\n"
"# List of obstacles\n"
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
"\n"
"================================================================================\n"
"MSG: marti_nav_msgs/Obstacle\n"
"string id\n"
"# Unique id for the obstacle or empty if not used.\n"
"\n"
"geometry_msgs/Pose pose\n"
"# The pose of the origin of the obstacle.\n"
"\n"
"geometry_msgs/Point[] polygon\n"
"# A list of points that define the obstacle's geometry in horizontal\n"
"# plane relative to the obstacle's pose.  The polygon is implicitly\n"
"# closed by a segment between the last and first points.\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.obstacles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObstacleArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::ObstacleArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::ObstacleArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "obstacles[]" << std::endl;
    for (size_t i = 0; i < v.obstacles.size(); ++i)
    {
      s << indent << "  obstacles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::marti_nav_msgs::Obstacle_<ContainerAllocator> >::stream(s, indent + "    ", v.obstacles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_OBSTACLEARRAY_H
