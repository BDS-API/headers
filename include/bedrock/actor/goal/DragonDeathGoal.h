#pragma once

#include <string>
#include "Goal.h"


class DragonDeathGoal : Goal {

public:
    ~DragonDeathGoal(); // _ZN15DragonDeathGoalD2Ev
    virtual bool canUse(); // _ZN15DragonDeathGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15DragonDeathGoal16canContinueToUseEv
    virtual void start(); // _ZN15DragonDeathGoal5startEv
    virtual void stop(); // _ZN15DragonDeathGoal4stopEv
    virtual void tick(); // _ZN15DragonDeathGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15DragonDeathGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonDeathGoal(EnderDragon &); // _ZN15DragonDeathGoalC2ER11EnderDragon
};
