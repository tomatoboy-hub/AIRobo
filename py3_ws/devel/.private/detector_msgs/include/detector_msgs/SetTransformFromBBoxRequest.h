// Generated by gencpp from file detector_msgs/SetTransformFromBBoxRequest.msg
// DO NOT EDIT!


#ifndef DETECTOR_MSGS_MESSAGE_SETTRANSFORMFROMBBOXREQUEST_H
#define DETECTOR_MSGS_MESSAGE_SETTRANSFORMFROMBBOXREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <detector_msgs/BBox.h>

namespace detector_msgs
{
template <class ContainerAllocator>
struct SetTransformFromBBoxRequest_
{
  typedef SetTransformFromBBoxRequest_<ContainerAllocator> Type;

  SetTransformFromBBoxRequest_()
    : bbox()
    , frame()  {
    }
  SetTransformFromBBoxRequest_(const ContainerAllocator& _alloc)
    : bbox(_alloc)
    , frame(_alloc)  {
  (void)_alloc;
    }



   typedef  ::detector_msgs::BBox_<ContainerAllocator>  _bbox_type;
  _bbox_type bbox;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_type;
  _frame_type frame;





  typedef boost::shared_ptr< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetTransformFromBBoxRequest_

typedef ::detector_msgs::SetTransformFromBBoxRequest_<std::allocator<void> > SetTransformFromBBoxRequest;

typedef boost::shared_ptr< ::detector_msgs::SetTransformFromBBoxRequest > SetTransformFromBBoxRequestPtr;
typedef boost::shared_ptr< ::detector_msgs::SetTransformFromBBoxRequest const> SetTransformFromBBoxRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator1> & lhs, const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator2> & rhs)
{
  return lhs.bbox == rhs.bbox &&
    lhs.frame == rhs.frame;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator1> & lhs, const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace detector_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e54e737b8466a302e35424be325fe2f4";
  }

  static const char* value(const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe54e737b8466a302ULL;
  static const uint64_t static_value2 = 0xe35424be325fe2f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detector_msgs/SetTransformFromBBoxRequest";
  }

  static const char* value(const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detector_msgs/BBox bbox\n"
"string frame\n"
"\n"
"================================================================================\n"
"MSG: detector_msgs/BBox\n"
"string label\n"
"float64 score\n"
"int64 x\n"
"int64 y\n"
"int64 w\n"
"int64 h\n"
;
  }

  static const char* value(const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bbox);
      stream.next(m.frame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTransformFromBBoxRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::detector_msgs::SetTransformFromBBoxRequest_<ContainerAllocator>& v)
  {
    s << indent << "bbox: ";
    s << std::endl;
    Printer< ::detector_msgs::BBox_<ContainerAllocator> >::stream(s, indent + "  ", v.bbox);
    s << indent << "frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DETECTOR_MSGS_MESSAGE_SETTRANSFORMFROMBBOXREQUEST_H
