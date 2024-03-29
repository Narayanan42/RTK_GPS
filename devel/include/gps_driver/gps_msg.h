// Generated by gencpp from file gps_driver/gps_msg.msg
// DO NOT EDIT!


#ifndef GPS_DRIVER_MESSAGE_GPS_MSG_H
#define GPS_DRIVER_MESSAGE_GPS_MSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace gps_driver
{
template <class ContainerAllocator>
struct gps_msg_
{
  typedef gps_msg_<ContainerAllocator> Type;

  gps_msg_()
    : Header()
    , Latitude(0.0)
    , Longitude(0.0)
    , Altitude(0.0)
    , utm_easting(0.0)
    , utm_northing(0.0)
    , zone(0.0)
    , letter()
    , Fix_quality(0.0)  {
    }
  gps_msg_(const ContainerAllocator& _alloc)
    : Header(_alloc)
    , Latitude(0.0)
    , Longitude(0.0)
    , Altitude(0.0)
    , utm_easting(0.0)
    , utm_northing(0.0)
    , zone(0.0)
    , letter(_alloc)
    , Fix_quality(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _Header_type;
  _Header_type Header;

   typedef double _Latitude_type;
  _Latitude_type Latitude;

   typedef double _Longitude_type;
  _Longitude_type Longitude;

   typedef double _Altitude_type;
  _Altitude_type Altitude;

   typedef double _utm_easting_type;
  _utm_easting_type utm_easting;

   typedef double _utm_northing_type;
  _utm_northing_type utm_northing;

   typedef double _zone_type;
  _zone_type zone;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _letter_type;
  _letter_type letter;

   typedef double _Fix_quality_type;
  _Fix_quality_type Fix_quality;





  typedef boost::shared_ptr< ::gps_driver::gps_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gps_driver::gps_msg_<ContainerAllocator> const> ConstPtr;

}; // struct gps_msg_

typedef ::gps_driver::gps_msg_<std::allocator<void> > gps_msg;

typedef boost::shared_ptr< ::gps_driver::gps_msg > gps_msgPtr;
typedef boost::shared_ptr< ::gps_driver::gps_msg const> gps_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gps_driver::gps_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gps_driver::gps_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gps_driver::gps_msg_<ContainerAllocator1> & lhs, const ::gps_driver::gps_msg_<ContainerAllocator2> & rhs)
{
  return lhs.Header == rhs.Header &&
    lhs.Latitude == rhs.Latitude &&
    lhs.Longitude == rhs.Longitude &&
    lhs.Altitude == rhs.Altitude &&
    lhs.utm_easting == rhs.utm_easting &&
    lhs.utm_northing == rhs.utm_northing &&
    lhs.zone == rhs.zone &&
    lhs.letter == rhs.letter &&
    lhs.Fix_quality == rhs.Fix_quality;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gps_driver::gps_msg_<ContainerAllocator1> & lhs, const ::gps_driver::gps_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gps_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gps_driver::gps_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_driver::gps_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gps_driver::gps_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gps_driver::gps_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_driver::gps_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_driver::gps_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gps_driver::gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7240be449904272d0b1b1f33d604fca9";
  }

  static const char* value(const ::gps_driver::gps_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7240be449904272dULL;
  static const uint64_t static_value2 = 0x0b1b1f33d604fca9ULL;
};

template<class ContainerAllocator>
struct DataType< ::gps_driver::gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gps_driver/gps_msg";
  }

  static const char* value(const ::gps_driver::gps_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gps_driver::gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header Header\n"
"float64 Latitude\n"
"float64 Longitude\n"
"float64 Altitude\n"
"float64 utm_easting\n"
"float64 utm_northing\n"
"float64 zone\n"
"string letter\n"
"float64 Fix_quality\n"
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

  static const char* value(const ::gps_driver::gps_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gps_driver::gps_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Header);
      stream.next(m.Latitude);
      stream.next(m.Longitude);
      stream.next(m.Altitude);
      stream.next(m.utm_easting);
      stream.next(m.utm_northing);
      stream.next(m.zone);
      stream.next(m.letter);
      stream.next(m.Fix_quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gps_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gps_driver::gps_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gps_driver::gps_msg_<ContainerAllocator>& v)
  {
    s << indent << "Header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.Header);
    s << indent << "Latitude: ";
    Printer<double>::stream(s, indent + "  ", v.Latitude);
    s << indent << "Longitude: ";
    Printer<double>::stream(s, indent + "  ", v.Longitude);
    s << indent << "Altitude: ";
    Printer<double>::stream(s, indent + "  ", v.Altitude);
    s << indent << "utm_easting: ";
    Printer<double>::stream(s, indent + "  ", v.utm_easting);
    s << indent << "utm_northing: ";
    Printer<double>::stream(s, indent + "  ", v.utm_northing);
    s << indent << "zone: ";
    Printer<double>::stream(s, indent + "  ", v.zone);
    s << indent << "letter: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.letter);
    s << indent << "Fix_quality: ";
    Printer<double>::stream(s, indent + "  ", v.Fix_quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GPS_DRIVER_MESSAGE_GPS_MSG_H
