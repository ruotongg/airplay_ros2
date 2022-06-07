% Initialize three nodes.

player_detection = ros2node("player_detection");
rfid = ros2node("rfid");
unity = ros2node("unity");
ui = ros2node("ui");

% Create publishers and subscribers for the '/pos_raw' topic

posRawPub = ros2publisher(player_detection,'/pos_raw','ap_interfaces/Pos');
posRawPubmsg = ros2message(posRawPub);
posRawSub1 = ros2subscriber(rfid,'/pos_raw');
posRawSub2 = ros2subscriber(unity,'/pos_raw');

% Create a publisher and subscriber for the '/pos_true' topic

posTruePub = ros2publisher(rfid,'/pos_true','ap_interfaces/Pos');
posTruePubmsg = ros2message(posRawPub);
posTrueSub = ros2subscriber(unity,'/pos_true');

% Create a publisher and subscriber for the '/score/player_score' topic

playerScorePub = ros2publisher(unity,'/score/player_score','example_interfaces/Int32MultiArray');
playerScorePubmsg = ros2message(playerScorePub);
playerScoreSub = ros2subscriber(ui,'/score/player_score');

% Create a publisher and subscriber for the '/score/game_score' topic

gameScorePub = ros2publisher(unity,'/score/game_score','example_interfaces/Int32MultiArray');
gameScorePubmsg = ros2message(gameScorePub);
gameScoreSub = ros2subscriber(ui,'/score/game_score');

% Create publishers and subscribers for the '/control' topic
controlPub = ros2publisher(ui,'/control','example_interfaces/Int8');
controlPubmsg = ros2message(controlPub);
controlSub1 = ros2subscriber(player_detection,'/control');
controlSub2 = ros2subscriber(rfid,'/control');

% Create a timer for publishing messages and assign appropriate handles
% The timer will call exampleHelperROSSimTimer at a rate of 10 Hz.
timerHandles.posRawPub = posRawPub;
timerHandles.posRawPubmsg = posRawPubmsg;
timerHandles.posTruePub = posTruePub;
timerHandles.posTruePubmsg = posTruePubmsg;
timerHandles.playerScorePub = playerScorePub;
timerHandles.playerScorePubmsg = playerScorePubmsg;
timerHandles.gameScorePub = gameScorePub;
timerHandles.gameScorePubmsg = gameScorePubmsg;
timerHandles.controlPub = controlPub;
timerHandles.controlPubmsg = controlPubmsg;
simTimer = SampleTimer(1/60, {@SampleSimTimer,timerHandles});