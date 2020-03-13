#pragma once

#include <string>
#include "Goal.h"


class DragonHoldingPatternGoal : Goal {

public:
    ~DragonHoldingPatternGoal(); // _ZN24DragonHoldingPatternGoalD2Ev
    virtual bool canUse(); // _ZN24DragonHoldingPatternGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN24DragonHoldingPatternGoal16canContinueToUseEv
    virtual void start(); // _ZN24DragonHoldingPatternGoal5startEv
    virtual void stop(); // _ZN24DragonHoldingPatternGoal4stopEv
    virtual void tick(); // _ZN24DragonHoldingPatternGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK24DragonHoldingPatternGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonHoldingPatternGoal(EnderDragon &); // _ZN24DragonHoldingPatternGoalC2ER11EnderDragon
    void findNewTarget(); // _ZN24DragonHoldingPatternGoal13findNewTargetEv
};
