// Generated by gencpp from file detector_msgs/GetObjectDetectionRequest.msg
// DO NOT EDIT!


#ifndef DETECTOR_MSGS_MESSAGE_GETOBJECTDETECTIONREQUEST_H
#define DETECTOR_MSGS_MESSAGE_GETOBJECTDETECTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace detector_msgs
{
template <class ContainerAllocator>
struct GetObjectDetectionRequest_
{
  typedef GetObjectDetectionRequest_<ContainerAllocator> Type;

  GetObjectDetectionRequest_()
    : header()
    , type()  {
    }
  GetObjectDetectionRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetObjectDetectionRequest_

typedef ::detector_msgs::GetObjectDetectionRequest_<std::allocator<void> > GetObjectDetectionRequest;

typedef boost::shared_ptr< ::detector_msgs::GetObjectDetectionRequest > GetObjectDetectionRequestPtr;
typedef boost::shared_ptr< ::detector_msgs::GetObjectDetectionRequest const> GetObjectDetectionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator1> & lhs, const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator1> & lhs, const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace detector_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "721048a671fa01c2cc93c1022513a3b2";
  }

  static const char* value(const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x721048a671fa01c2ULL;
  static const uint64_t static_value2 = 0xcc93c1022513a3b2ULL;
};

template<class ContainerAllocator>
struct DataType< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detector_msgs/GetObjectDetectionRequest";
  }

  static const char* value(const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"string type\n"
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

  static const char* value(const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetObjectDetectionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::detector_msgs::GetObjectDetectionRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DETECTOR_MSGS_MESSAGE_GETOBJECTDETECTIONREQUEST_H
