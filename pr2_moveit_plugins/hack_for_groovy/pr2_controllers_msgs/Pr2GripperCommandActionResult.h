/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg/Pr2GripperCommandActionResult.msg
 *
 */


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDACTIONRESULT_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <pr2_controllers_msgs/Pr2GripperCommandResult.h>

namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct Pr2GripperCommandActionResult_
{
  typedef Pr2GripperCommandActionResult_<ContainerAllocator> Type;

  Pr2GripperCommandActionResult_()
    : header()
    , status()
    , result()  {
    }
  Pr2GripperCommandActionResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , result(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::pr2_controllers_msgs::Pr2GripperCommandResult_<ContainerAllocator>  _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Pr2GripperCommandActionResult_

typedef ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<std::allocator<void> > Pr2GripperCommandActionResult;

typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandActionResult > Pr2GripperCommandActionResultPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandActionResult const> Pr2GripperCommandActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/msg'], 'pr2_controllers_msgs': ['/wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg', '/wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg', '/wg/stor2a/isucan/projects/moveit/src/moveit_pr2/pr2_controllers_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "143702cb2df0f163c5283cedc5efc6b6";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x143702cb2df0f163ULL;
  static const uint64_t static_value2 = 0xc5283cedc5efc6b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/Pr2GripperCommandActionResult";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
Pr2GripperCommandResult result\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: pr2_controllers_msgs/Pr2GripperCommandResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 position  # The current gripper gap size (in meters)\n\
float64 effort    # The current effort exerted (in Newtons)\n\
bool stalled      # True iff the gripper is exerting max effort and not moving\n\
bool reached_goal # True iff the gripper position has reached the commanded setpoint\n\
\n\
";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Pr2GripperCommandActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_controllers_msgs::Pr2GripperCommandActionResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    s << std::endl;
    Printer< ::pr2_controllers_msgs::Pr2GripperCommandResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDACTIONRESULT_H
