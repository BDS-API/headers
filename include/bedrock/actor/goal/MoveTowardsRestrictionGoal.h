#pragma once

#include <string>
#include "Goal.h"


class MoveTowardsRestrictionGoal : Goal {

public:
    ~MoveTowardsRestrictionGoal(); // _ZN26MoveTowardsRestrictionGoalD2Ev
    virtual bool canUse(); // _ZN26MoveTowardsRestrictionGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN26MoveTowardsRestrictionGoal16canContinueToUseEv
    virtual void start(); // _ZN26MoveTowardsRestrictionGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK26MoveTowardsRestrictionGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MoveTowardsRestrictionGoal(Mob &, float); // _ZN26MoveTowardsRestrictionGoalC2ER3Mobf
};
