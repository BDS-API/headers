#pragma once

#include <string>
#include "Goal.h"


class FindUnderwaterTreasureGoal : public Goal {

public:
    virtual ~FindUnderwaterTreasureGoal(); // _ZN26FindUnderwaterTreasureGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN26FindUnderwaterTreasureGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN26FindUnderwaterTreasureGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN26FindUnderwaterTreasureGoal16canBeInterruptedEv
    virtual void start(); // _ZN26FindUnderwaterTreasureGoal5startEv
    virtual void stop(); // _ZN26FindUnderwaterTreasureGoal4stopEv
    virtual void tick(); // _ZN26FindUnderwaterTreasureGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK26FindUnderwaterTreasureGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FindUnderwaterTreasureGoal(Mob &, float, int, int); // _ZN26FindUnderwaterTreasureGoalC2ER3Mobfii
};
