// Generated by gencpp from file baxter_core_msgs/EndEffectorProperties.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORPROPERTIES_H
#define BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORPROPERTIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct EndEffectorProperties_
{
  typedef EndEffectorProperties_<ContainerAllocator> Type;

  EndEffectorProperties_()
    : id(0)
    , ui_type(0)
    , manufacturer()
    , product()
    , serial_number()
    , hardware_rev()
    , firmware_rev()
    , firmware_date()
    , controls_grip(false)
    , senses_grip(false)
    , reverses_grip(false)
    , controls_force(false)
    , senses_force(false)
    , controls_position(false)
    , senses_position(false)
    , properties()  {
    }
  EndEffectorProperties_(const ContainerAllocator& _alloc)
    : id(0)
    , ui_type(0)
    , manufacturer(_alloc)
    , product(_alloc)
    , serial_number(_alloc)
    , hardware_rev(_alloc)
    , firmware_rev(_alloc)
    , firmware_date(_alloc)
    , controls_grip(false)
    , senses_grip(false)
    , reverses_grip(false)
    , controls_force(false)
    , senses_force(false)
    , controls_position(false)
    , senses_position(false)
    , properties(_alloc)  {
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _ui_type_type;
  _ui_type_type ui_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _manufacturer_type;
  _manufacturer_type manufacturer;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _product_type;
  _product_type product;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_number_type;
  _serial_number_type serial_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hardware_rev_type;
  _hardware_rev_type hardware_rev;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _firmware_rev_type;
  _firmware_rev_type firmware_rev;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _firmware_date_type;
  _firmware_date_type firmware_date;

   typedef uint8_t _controls_grip_type;
  _controls_grip_type controls_grip;

   typedef uint8_t _senses_grip_type;
  _senses_grip_type senses_grip;

   typedef uint8_t _reverses_grip_type;
  _reverses_grip_type reverses_grip;

   typedef uint8_t _controls_force_type;
  _controls_force_type controls_force;

   typedef uint8_t _senses_force_type;
  _senses_force_type senses_force;

   typedef uint8_t _controls_position_type;
  _controls_position_type controls_position;

   typedef uint8_t _senses_position_type;
  _senses_position_type senses_position;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _properties_type;
  _properties_type properties;


    enum { NO_GRIPPER = 0u };
     enum { SUCTION_CUP_GRIPPER = 1u };
     enum { ELECTRIC_GRIPPER = 2u };
     enum { CUSTOM_GRIPPER = 3u };
 

  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> const> ConstPtr;

}; // struct EndEffectorProperties_

typedef ::baxter_core_msgs::EndEffectorProperties_<std::allocator<void> > EndEffectorProperties;

typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorProperties > EndEffectorPropertiesPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorProperties const> EndEffectorPropertiesConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/josmiranda/bt_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65f719b6b567d6b71b340982808da896";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65f719b6b567d6b7ULL;
  static const uint64_t static_value2 = 0x1b340982808da896ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/EndEffectorProperties";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id               # EndEffectorId\n\
uint8  ui_type\n\
    # End Effector type enumeration, for the UI:\n\
    uint8  NO_GRIPPER = 0\n\
    uint8  SUCTION_CUP_GRIPPER = 1\n\
    uint8  ELECTRIC_GRIPPER = 2\n\
    uint8  CUSTOM_GRIPPER = 3\n\
string manufacturer     # Manufacturer name\n\
string product          # Product name\n\
string serial_number    # Serial number, optional\n\
string hardware_rev     # Hardware revision, optional\n\
string firmware_rev     # Firmware revision, optional\n\
string firmware_date    # Firmware date, optional\n\
#\n\
# End Effector Capabilities\n\
bool   controls_grip    # true if the gripper has grip/release control\n\
bool   senses_grip      # true if the gripper has grip sense\n\
bool   reverses_grip    # true if the gripper has reverse-grip mode\n\
\n\
bool   controls_force   # true if the gripper has force control\n\
bool   senses_force     # true if the gripper has force sense\n\
\n\
bool   controls_position # true if the gripper has position control\n\
bool   senses_position   # true if the gripper has position sense\n\
#\n\
string properties       # JSON; other properties\n\
";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.ui_type);
      stream.next(m.manufacturer);
      stream.next(m.product);
      stream.next(m.serial_number);
      stream.next(m.hardware_rev);
      stream.next(m.firmware_rev);
      stream.next(m.firmware_date);
      stream.next(m.controls_grip);
      stream.next(m.senses_grip);
      stream.next(m.reverses_grip);
      stream.next(m.controls_force);
      stream.next(m.senses_force);
      stream.next(m.controls_position);
      stream.next(m.senses_position);
      stream.next(m.properties);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct EndEffectorProperties_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::EndEffectorProperties_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "ui_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ui_type);
    s << indent << "manufacturer: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.manufacturer);
    s << indent << "product: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.product);
    s << indent << "serial_number: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial_number);
    s << indent << "hardware_rev: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hardware_rev);
    s << indent << "firmware_rev: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.firmware_rev);
    s << indent << "firmware_date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.firmware_date);
    s << indent << "controls_grip: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.controls_grip);
    s << indent << "senses_grip: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.senses_grip);
    s << indent << "reverses_grip: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reverses_grip);
    s << indent << "controls_force: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.controls_force);
    s << indent << "senses_force: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.senses_force);
    s << indent << "controls_position: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.controls_position);
    s << indent << "senses_position: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.senses_position);
    s << indent << "properties: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.properties);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORPROPERTIES_H
