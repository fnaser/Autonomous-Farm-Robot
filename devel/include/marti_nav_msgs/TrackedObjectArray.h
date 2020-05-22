// Generated by gencpp from file marti_nav_msgs/TrackedObjectArray.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_TRACKEDOBJECTARRAY_H
#define MARTI_NAV_MSGS_MESSAGE_TRACKEDOBJECTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <marti_nav_msgs/TrackedObject.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct TrackedObjectArray_
{
  typedef TrackedObjectArray_<ContainerAllocator> Type;

  TrackedObjectArray_()
    : header()
    , objects()  {
    }
  TrackedObjectArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::marti_nav_msgs::TrackedObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::marti_nav_msgs::TrackedObject_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedObjectArray_

typedef ::marti_nav_msgs::TrackedObjectArray_<std::allocator<void> > TrackedObjectArray;

typedef boost::shared_ptr< ::marti_nav_msgs::TrackedObjectArray > TrackedObjectArrayPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::TrackedObjectArray const> TrackedObjectArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.objects == rhs.objects;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eeceef8756dddeb96eb4d6e607b3e5fd";
  }

  static const char* value(const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeeceef8756dddeb9ULL;
  static const uint64_t static_value2 = 0x6eb4d6e607b3e5fdULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/TrackedObjectArray";
  }

  static const char* value(const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is used to communicate tracking data for one or more objects.\n"
"\n"
"Header header            # The frame that the objects are defined in.\n"
"\n"
"TrackedObject[] objects  # The tracked objects.\n"
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
"MSG: marti_nav_msgs/TrackedObject\n"
"uint8 VEHICLE=0\n"
"uint8 PEDESTRIAN=1\n"
"uint8 UNKNOWN=255\n"
"\n"
"Header header  # Frame and timestamp\n"
"uint16 id      # Id\n"
"\n"
"geometry_msgs/PoseWithCovariance pose      # Pose in the header frame.\n"
"geometry_msgs/TwistWithCovariance velocity # Velocity in the header frame.\n"
"geometry_msgs/Vector3 linear_acceleration  # Acceleration in the header frame.\n"
"float64[9] linear_acceleration_covariance  # Row major x, y z\n"
"\n"
"geometry_msgs/Point[] polygon\n"
"# A list of points that define the obstacle's geometry in horizontal\n"
"# plane relative to the obstacle's pose.  The polygon is implicitly\n"
"# closed by a segment between the last and first points.\n"
"\n"
"# Estimated oriented bounding box for object classes with rectangular shapes.\n"
"float32 length                 # Length of the object in meters\n"
"float32 length_quality         # Length quality number [0,1]\n"
"float32 width                  # Width of the object in meters\n"
"float32 width_quality          # Width quality number [0,1]\n"
"\n"
"uint8 classification           # Classification\n"
"float32 classification_quality # Classification quality number [0,1]\n"
"\n"
"float32 existence_probability  # Existence probability [0,1]\n"
"\n"
"duration age_duration          # Age of the track since first detection.\n"
"duration prediction_duration   # Age of the prediction since the active flag was last true.\n"
"\n"
"bool active                    # Active flag for if the objects is currently being detected.\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TwistWithCovariance\n"
"# This expresses velocity in free space with uncertainty.\n"
"\n"
"Twist twist\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedObjectArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::TrackedObjectArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::marti_nav_msgs::TrackedObject_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_TRACKEDOBJECTARRAY_H
