function rosmsgOut = Pos(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.total = int8(slBusIn.total);
    rosmsgOut.timestamp = int64(slBusIn.timestamp);
    rosmsgOut.x = int16(slBusIn.x(1:slBusIn.x_SL_Info.CurrentLength));
    rosmsgOut.y = int16(slBusIn.y(1:slBusIn.y_SL_Info.CurrentLength));
    rosmsgOut.player_id = int8(slBusIn.player_id(1:slBusIn.player_id_SL_Info.CurrentLength));
    for iter=1:slBusIn.tag_id_SL_Info.CurrentLength
        rosmsgOut.tag_id{iter} = char(slBusIn.tag_id(iter).data).';
        maxlen = length(slBusIn.tag_id(iter).data);
        if slBusIn.tag_id(iter).data_SL_Info.CurrentLength < maxlen
        rosmsgOut.tag_id{iter}(slBusIn.tag_id(iter).data_SL_Info.CurrentLength+1:maxlen) = [];
        end
    end
    if slBusIn.tag_id_SL_Info.CurrentLength < numel(rosmsgOut.tag_id)
        rosmsgOut.tag_id(slBusIn.tag_id_SL_Info.CurrentLength+1:numel(rosmsgOut.tag_id)) = [];
    end
    rosmsgOut.tag_id = rosmsgOut.tag_id.';
    rosmsgOut.size = int8(slBusIn.size(1:slBusIn.size_SL_Info.CurrentLength));
end
