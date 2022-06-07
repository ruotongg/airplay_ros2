function rosmsgOut = Int8(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.data = int8(slBusIn.data);
end
