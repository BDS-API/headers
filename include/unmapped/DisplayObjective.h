#pragma once

#include <string>


class DisplayObjective {

public:
//  DisplayObjective(Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition // _ZN16DisplayObjectiveC2ERK9Objective18ObjectiveSortOrder
    bool isDisplaying(Objective const&)const; // _ZNK16DisplayObjective12isDisplayingERK9Objective
    bool isValid()const; // _ZNK16DisplayObjective7isValidEv
    void getObjective()const; // _ZNK16DisplayObjective12getObjectiveEv
    void getSortOrder()const; // _ZNK16DisplayObjective12getSortOrderEv
    std::string getBelowNameStringForId(ScoreboardId const&)const; // _ZNK16DisplayObjective23getBelowNameStringForIdB5cxx11ERK12ScoreboardId
    void deserialize(CompoundTag const&, Scoreboard const&); // _ZN16DisplayObjective11deserializeERK11CompoundTagRK10Scoreboard
    void serialize(DisplayObjective const&); // _ZN16DisplayObjective9serializeERKS_
    DisplayObjective(); // _ZN16DisplayObjectiveC2Ev
};
