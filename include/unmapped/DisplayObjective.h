#pragma once

#include "./ScoreboardId.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./Objective.h"
#include "./DisplayObjective.h"
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include <string>


class DisplayObjective {

public:

//  DisplayObjective(Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    bool isDisplaying(Objective const&)const;
    bool isValid()const;
    void getObjective()const;
    void getSortOrder()const;
    std::string getBelowNameStringForId(ScoreboardId const&)const;
    void deserialize(CompoundTag const&, Scoreboard const&);
    void serialize(DisplayObjective const&);
    DisplayObjective();
};
