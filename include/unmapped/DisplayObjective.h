#pragma once

#include "../bedrock/nbt/CompoundTag"


class DisplayObjective {

public:

    DisplayObjective(Objective const&, ObjectiveSortOrder);
    bool isDisplaying(Objective const&)const;
    bool isValid(void)const;
    void getObjective(void)const;
    void getSortOrder(void)const;
    void deserialize(CompoundTag const&, Scoreboard const&);
    void serialize(DisplayObjective const&);
    DisplayObjective(void);
};
