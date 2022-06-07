function rosmsgOut = Int32MultiArray(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.layout = bus_conv_fcns.ros2.busToMsg.example_interfaces.MultiArrayLayout(slBusIn.layout,rosmsgOut.layout(1));
    rosmsgOut.data = int32(slBusIn.data(1:slBusIn.data_SL_Info.CurrentLength));
end
