#pragma once

#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "../bedrock/level/ServerLevel.h"


namespace ScoreboardCommand {

class InitProxy {

public:

    InitProxy(ServerLevel &);
    InitProxy(Scoreboard &);
    void getScoreboard();
};

}