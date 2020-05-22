// Generated by gencpp from file marti_nav_msgs/SetRoute.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_SETROUTE_H
#define MARTI_NAV_MSGS_MESSAGE_SETROUTE_H

#include <ros/service_traits.h>


#include <marti_nav_msgs/SetRouteRequest.h>
#include <marti_nav_msgs/SetRouteResponse.h>


namespace marti_nav_msgs
{

struct SetRoute
{

typedef SetRouteRequest Request;
typedef SetRouteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRoute
} // namespace marti_nav_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::marti_nav_msgs::SetRoute > {
  static const char* value()
  {
    return "0bc46443a53e01f8652f1e0c92515b05";
  }

  static const char* value(const ::marti_nav_msgs::SetRoute&) { return value(); }
};

template<>
struct DataType< ::marti_nav_msgs::SetRoute > {
  static const char* value()
  {
    return "marti_nav_msgs/SetRoute";
  }

  static const char* value(const ::marti_nav_msgs::SetRoute&) { return value(); }
};


// service_traits::MD5Sum< ::marti_nav_msgs::SetRouteRequest> should match
// service_traits::MD5Sum< ::marti_nav_msgs::SetRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::SetRouteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::SetRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::SetRouteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::SetRouteRequest> should match
// service_traits::DataType< ::marti_nav_msgs::SetRoute >
template<>
struct DataType< ::marti_nav_msgs::SetRouteRequest>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::SetRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::SetRouteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::marti_nav_msgs::SetRouteResponse> should match
// service_traits::MD5Sum< ::marti_nav_msgs::SetRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::SetRouteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::SetRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::SetRouteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::SetRouteResponse> should match
// service_traits::DataType< ::marti_nav_msgs::SetRoute >
template<>
struct DataType< ::marti_nav_msgs::SetRouteResponse>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::SetRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::SetRouteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_SETROUTE_H
