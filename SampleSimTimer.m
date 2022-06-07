function SampleSimTimer(~, ~, handles)
    %exampleHelperROS2SimTimer - Timer update function called in startExamples to publish
    %   messages at well-defined intervals
    %   exampleHelperROS2SimTimer(~,~,HANDLES) publishes /pose and /scan messages at
    %   regular intervals. The /scan message value remains constant while
    %   the /pose message value changes continually.
    %   
    %   See also exampleHelperROS2CreateSampleNetwork
    
    %   Copyright 2019 The MathWorks, Inc.
    
    % Update the pose message values
    if isvalid(handles.posRawPub)
%         handles.twistPubmsg.linear.x = handles.twistPubmsg.linear.x + (rand(1)-0.5)./10;
%         handles.twistPubmsg.linear.y = handles.twistPubmsg.linear.y + (rand(1)-0.5)./10;
%         handles.twistPubmsg.linear.z = handles.twistPubmsg.linear.z + (rand(1)-0.5)./10;
%         handles.twistPubmsg.angular.x = handles.twistPubmsg.angular.x + (rand(1)-0.5)./10;
%         handles.twistPubmsg.angular.y = handles.twistPubmsg.angular.y + (rand(1)-0.5)./10;
%         handles.twistPubmsg.angular.z = handles.twistPubmsg.angular.z + (rand(1)-0.5)./10;
    
        % Publish the scan and pose messages
        send(handles.posRawPub,handles.posRawPubmsg);
    end
       
    if isvalid(handles.posTruePub)
        send(handles.posTruePub,handles.posTruePubmsg);
    end

    if isvalid(handles.playerScorePub)
        send(handles.playerScorePub,handles.playerScorePubmsg);
    end

    if isvalid(handles.gameScorePub)
        send(handles.gameScorePub,handles.gameScorePubmsg);
    end

    if isvalid(handles.controlPub)
        send(handles.controlPub,handles.controlPubmsg);
    end
end