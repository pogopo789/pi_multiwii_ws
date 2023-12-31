// Generated by gencpp from file multiwii/SendMSPRawMessageResponse.msg
// DO NOT EDIT!


#ifndef MULTIWII_MESSAGE_SENDMSPRAWMESSAGERESPONSE_H
#define MULTIWII_MESSAGE_SENDMSPRAWMESSAGERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multiwii
{
template <class ContainerAllocator>
struct SendMSPRawMessageResponse_
{
  typedef SendMSPRawMessageResponse_<ContainerAllocator> Type;

  SendMSPRawMessageResponse_()
    {
    }
  SendMSPRawMessageResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SendMSPRawMessageResponse_

typedef ::multiwii::SendMSPRawMessageResponse_<std::allocator<void> > SendMSPRawMessageResponse;

typedef boost::shared_ptr< ::multiwii::SendMSPRawMessageResponse > SendMSPRawMessageResponsePtr;
typedef boost::shared_ptr< ::multiwii::SendMSPRawMessageResponse const> SendMSPRawMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace multiwii

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multiwii/SendMSPRawMessageResponse";
  }

  static const char* value(const ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendMSPRawMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::multiwii::SendMSPRawMessageResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MULTIWII_MESSAGE_SENDMSPRAWMESSAGERESPONSE_H
