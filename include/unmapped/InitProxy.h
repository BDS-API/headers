#pragma once

#include "../bedrock/level/ServerLevel"
#include "../bedrock/level/scoreboard/Scoreboard"


using namespace ScoreboardCommand;

class InitProxy {

public:

    InitProxy(ServerLevel &);
    InitProxy(Scoreboard &);
    void getScoreboard();
};
