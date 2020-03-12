#pragma once

#include <string>


class DisplayObjective {

public:
    DisplayObjective();
    void getSortOrder()const;
    bool isDisplaying(Objective const&)const;
    void deserialize(CompoundTag const&, Scoreboard const&);
    std::string getBelowNameStringForId(ScoreboardId const&)const;
    void serialize(DisplayObjective const&);
    void getObjective()const;
    bool isValid()const;
//  DisplayObjective(Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
};
