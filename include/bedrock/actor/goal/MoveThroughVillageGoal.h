#pragma once

#include <string>
#include "Goal.h"


class MoveThroughVillageGoal : Goal {

public:
    ~MoveThroughVillageGoal(); // _ZN22MoveThroughVillageGoalD2Ev
    virtual bool canUse(); // _ZN22MoveThroughVillageGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN22MoveThroughVillageGoal16canContinueToUseEv
    virtual void start(); // _ZN22MoveThroughVillageGoal5startEv
    virtual void stop(); // _ZN22MoveThroughVillageGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22MoveThroughVillageGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MoveThroughVillageGoal(Mob &, float, bool); // _ZN22MoveThroughVillageGoalC2ER3Mobfb
};
