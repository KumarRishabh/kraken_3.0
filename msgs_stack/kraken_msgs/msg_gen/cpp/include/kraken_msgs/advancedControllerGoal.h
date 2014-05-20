/* Auto-generated by genmsg_cpp for file /home/prudhvi/ros_ws/kraken_3.0/msgs_stack/kraken_msgs/msg/advancedControllerGoal.msg */
#ifndef KRAKEN_MSGS_MESSAGE_ADVANCEDCONTROLLERGOAL_H
#define KRAKEN_MSGS_MESSAGE_ADVANCEDCONTROLLERGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace kraken_msgs
{
template <class ContainerAllocator>
struct advancedControllerGoal_ {
  typedef advancedControllerGoal_<ContainerAllocator> Type;

  advancedControllerGoal_()
  : x(0.0)
  , y(0.0)
  , depth(0.0)
  {
  }

  advancedControllerGoal_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , depth(0.0)
  {
  }

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _depth_type;
  float depth;


  typedef boost::shared_ptr< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct advancedControllerGoal
typedef  ::kraken_msgs::advancedControllerGoal_<std::allocator<void> > advancedControllerGoal;

typedef boost::shared_ptr< ::kraken_msgs::advancedControllerGoal> advancedControllerGoalPtr;
typedef boost::shared_ptr< ::kraken_msgs::advancedControllerGoal const> advancedControllerGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d52d05f2b70dc2c113fbc54289a1056a";
  }

  static const char* value(const  ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd52d05f2b70dc2c1ULL;
  static const uint64_t static_value2 = 0x13fbc54289a1056aULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/advancedControllerGoal";
  }

  static const char* value(const  ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal\n\
float32 x\n\
float32 y\n\
float32 depth\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.depth);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct advancedControllerGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::advancedControllerGoal_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "depth: ";
    Printer<float>::stream(s, indent + "  ", v.depth);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_ADVANCEDCONTROLLERGOAL_H

