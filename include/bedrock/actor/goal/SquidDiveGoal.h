#pragma once

#include <string>
#include "Goal.h"


class SquidDiveGoal : Goal {

public:
    ~SquidDiveGoal(); // _ZN13SquidDiveGoalD2Ev
    virtual bool canUse(); // _ZN13SquidDiveGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13SquidDiveGoal16canContinueToUseEv
    virtual void start(); // _ZN13SquidDiveGoal5startEv
    virtual void stop(); // _ZN13SquidDiveGoal4stopEv
    virtual void tick(); // _ZN13SquidDiveGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13SquidDiveGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SquidDiveGoal(Squid &); // _ZN13SquidDiveGoalC2ER5Squid
};
