#pragma once

class DisplayObjective {

public:

    void DisplayObjective(Objective const&, ObjectiveSortOrder);
    bool isDisplaying(Objective const&)const;
    bool isValid(void)const;
    void getObjective(void)const;
    void getSortOrder(void)const;
    void deserialize(CompoundTag const&, Scoreboard const&);
    void serialize(DisplayObjective const&);
    void DisplayObjective(void);
};
