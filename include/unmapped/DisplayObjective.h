#pragma once

#include "Objective.h"
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "ScoreboardId.h"
#include "../bedrock/nbt/CompoundTag.h"


class DisplayObjective {

public:
    std::string getBelowNameStringForId(ScoreboardId const&)const;
    void getSortOrder()const;
    void getObjective()const;
    DisplayObjective();
    void serialize(DisplayObjective const&);
    bool isValid()const;
//  DisplayObjective(Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    bool isDisplaying(Objective const&)const;
    void deserialize(CompoundTag const&, Scoreboard const&);
};
