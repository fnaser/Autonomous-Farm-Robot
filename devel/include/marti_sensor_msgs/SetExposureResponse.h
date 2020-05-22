// Generated by gencpp from file marti_sensor_msgs/SetExposureResponse.msg
// DO NOT EDIT!


#ifndef MARTI_SENSOR_MSGS_MESSAGE_SETEXPOSURERESPONSE_H
#define MARTI_SENSOR_MSGS_MESSAGE_SETEXPOSURERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marti_sensor_msgs
{
template <class ContainerAllocator>
struct SetExposureResponse_
{
  typedef SetExposureResponse_<ContainerAllocator> Type;

  SetExposureResponse_()
    : auto_exposure(false)
    , time(0)  {
    }
  SetExposureResponse_(const ContainerAllocator& _alloc)
    : auto_exposure(false)
    , time(0)  {
  (void)_alloc;
    }



   typedef uint8_t _auto_exposure_type;
  _auto_exposure_type auto_exposure;

   typedef int64_t _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetExposureResponse_

typedef ::marti_sensor_msgs::SetExposureResponse_<std::allocator<void> > SetExposureResponse;

typedef boost::shared_ptr< ::marti_sensor_msgs::SetExposureResponse > SetExposureResponsePtr;
typedef boost::shared_ptr< ::marti_sensor_msgs::SetExposureResponse const> SetExposureResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator2> & rhs)
{
  return lhs.auto_exposure == rhs.auto_exposure &&
    lhs.time == rhs.time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a226e84ef4a44363d3b289536b8589a5";
  }

  static const char* value(const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa226e84ef4a44363ULL;
  static const uint64_t static_value2 = 0xd3b289536b8589a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_sensor_msgs/SetExposureResponse";
  }

  static const char* value(const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool auto_exposure\n"
"int64 time\n"
"\n"
;
  }

  static const char* value(const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.auto_exposure);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetExposureResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_sensor_msgs::SetExposureResponse_<ContainerAllocator>& v)
  {
    s << indent << "auto_exposure: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.auto_exposure);
    s << indent << "time: ";
    Printer<int64_t>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_SENSOR_MSGS_MESSAGE_SETEXPOSURERESPONSE_H
