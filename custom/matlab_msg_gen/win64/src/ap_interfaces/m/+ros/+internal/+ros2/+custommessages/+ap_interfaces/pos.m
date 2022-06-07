function [data, info] = pos
%Pos gives an empty data for ap_interfaces/Pos
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'ap_interfaces/Pos';
[data.total, info.total] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('int64',1,0);
[data.x, info.x] = ros.internal.ros2.messages.ros2.default_type('int16',NaN,0);
[data.y, info.y] = ros.internal.ros2.messages.ros2.default_type('int16',NaN,0);
[data.player_id, info.player_id] = ros.internal.ros2.messages.ros2.default_type('int8',NaN,0);
[data.tag_id, info.tag_id] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.size, info.size] = ros.internal.ros2.messages.ros2.default_type('int8',NaN,0);
info.MessageType = 'ap_interfaces/Pos';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'total';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'x';
info.MatPath{4} = 'y';
info.MatPath{5} = 'player_id';
info.MatPath{6} = 'tag_id';
info.MatPath{7} = 'size';
