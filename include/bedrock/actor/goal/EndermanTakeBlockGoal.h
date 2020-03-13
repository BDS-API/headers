#pragma once

#include <string>
#include "Goal.h"


class EndermanTakeBlockGoal : Goal {

public:
    ~EndermanTakeBlockGoal(); // _ZN21EndermanTakeBlockGoalD2Ev
    virtual bool canUse(); // _ZN21EndermanTakeBlockGoal6canUseEv
    virtual void tick(); // _ZN21EndermanTakeBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21EndermanTakeBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    EndermanTakeBlockGoal(EnderMan &); // _ZN21EndermanTakeBlockGoalC2ER8EnderMan
};
