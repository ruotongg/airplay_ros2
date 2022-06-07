function ros1msg = ap_interfaces_msg_Pos_2To1_Converter(message,ros1msg)
%ap_interfaces_msg_Pos_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Total = message.total;
ros1msg.Timestamp = message.timestamp;
ros1msg.TagId = message.tag_id{1};
end