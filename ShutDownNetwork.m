%   This script shuts down the nodes, publishers and subscribers

% Clear timer object first
clear('simTimer');

% Shut down publishers and subscribers of the /pos_raw topic
clear('posRawPub');
clear('posRawPubmsg');
clear('posRawSub1');
clear('posRawSub2');

% Shut down publishers and subscribers of the /pos_true topic
clear('posTruePub');
clear('posTruePubmsg');
clear('posTrueSub');

% Shut down publishers and subscribers of the /score/player_score topic
clear('playerScorePub');
clear('playerScorePubmsg');
clear('playerScoreSub');

% Shut down publishers and subscribers of the /score/game_score topic
clear('gameScorePub');
clear('gameScorePubmsg');
clear('gameScoreSub');

% Shut down publishers and subscribers of the /control topic
clear('controlPub');
clear('controlPubmsg');
clear('controlSub1');
clear('controlSub2');

% Finally, shut down the three nodes
clear('player_detection');
clear('rfid');
clear('unity');
clear('ui');

% Delete data variables
clear('timerHandles');
