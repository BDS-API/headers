#pragma once

#include <string>
#include "Goal.h"


class HoldGroundGoal : Goal {

public:
    ~HoldGroundGoal(); // _ZN14HoldGroundGoalD2Ev
    virtual bool canUse(); // _ZN14HoldGroundGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14HoldGroundGoal16canContinueToUseEv
    virtual void start(); // _ZN14HoldGroundGoal5startEv
    virtual void stop(); // _ZN14HoldGroundGoal4stopEv
    virtual void tick(); // _ZN14HoldGroundGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14HoldGroundGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    HoldGroundGoal(Mob &, float, bool, float, DefinitionTrigger const&, DefinitionTrigger const&); // _ZN14HoldGroundGoalC2ER3MobfbfRK17DefinitionTriggerS4_
};
