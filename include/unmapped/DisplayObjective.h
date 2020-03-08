#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/scoreboard/Scoreboard"


class DisplayObjective {

public:

    DisplayObjective(Objective const&, ObjectiveSortOrder);
    bool isDisplaying(Objective const&)const;
    bool isValid()const;
    void getObjective()const;
    void getSortOrder()const;
    void deserialize(CompoundTag const&, Scoreboard const&);
    void serialize(DisplayObjective const&);
    DisplayObjective(void);
};
