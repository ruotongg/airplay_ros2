function ros2msg = ap_interfaces_msg_Pos_1To2_Converter(message,ros2msg)
%ap_interfaces_msg_Pos_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.total = message.Total;
ros2msg.timestamp = message.Timestamp;
ros2msg.tag_id = message.TagId;
end