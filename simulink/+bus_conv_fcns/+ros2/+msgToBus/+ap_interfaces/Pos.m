function slBusOut = Pos(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    slBusOut.total = int8(msgIn.total);
    slBusOut.timestamp = double(msgIn.timestamp);
    maxlength = length(slBusOut.x);
    recvdlength = length(msgIn.x);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'x', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.x_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.x_SL_Info.CurrentLength = uint32(currentlength);
    slBusOut.x = int16(msgIn.x(1:slBusOut.x_SL_Info.CurrentLength));
    if recvdlength < maxlength
    slBusOut.x(recvdlength+1:maxlength) = 0;
    end
    maxlength = length(slBusOut.y);
    recvdlength = length(msgIn.y);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'y', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.y_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.y_SL_Info.CurrentLength = uint32(currentlength);
    slBusOut.y = int16(msgIn.y(1:slBusOut.y_SL_Info.CurrentLength));
    if recvdlength < maxlength
    slBusOut.y(recvdlength+1:maxlength) = 0;
    end
    maxlength = length(slBusOut.player_id);
    recvdlength = length(msgIn.player_id);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'player_id', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.player_id_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.player_id_SL_Info.CurrentLength = uint32(currentlength);
    slBusOut.player_id = int8(msgIn.player_id(1:slBusOut.player_id_SL_Info.CurrentLength));
    if recvdlength < maxlength
    slBusOut.player_id(recvdlength+1:maxlength) = 0;
    end
    maxlength = length(slBusOut.tag_id);
    recvdlength = length(msgIn.tag_id);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'tag_id', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.tag_id_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.tag_id_SL_Info.CurrentLength = uint32(currentlength);
    for iter=1:currentlength
        recvlen = strlength(msgIn.tag_id(iter));
        maxlen = length(slBusOut.tag_id(iter).data);
        curlen = min(recvlen, maxlen);
        if (max(recvlen) > maxlen) && ...
                isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
            diag = MSLDiagnostic([], ...
                                 message('ros:slros:busconvert:TruncatedArray', ...
                                         'tag_id', msgIn.MessageType, maxlen, max(recvdlength), maxlength, varargin{2}));
            reportAsWarning(diag);
        end
        slBusOut.tag_id(iter).data_SL_Info.CurrentLength = uint32(curlen);
        slBusOut.tag_id(iter).data_SL_Info.ReceivedLength = uint32(recvlen);
        slBusOut.tag_id(iter).data(1:curlen) = uint8(char(msgIn.tag_id(iter)));
    end
    maxlength = length(slBusOut.size);
    recvdlength = length(msgIn.size);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'size', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.size_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.size_SL_Info.CurrentLength = uint32(currentlength);
    slBusOut.size = int8(msgIn.size(1:slBusOut.size_SL_Info.CurrentLength));
    if recvdlength < maxlength
    slBusOut.size(recvdlength+1:maxlength) = 0;
    end
end
