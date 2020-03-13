#pragma once

#include <string>
#include "Goal.h"


class EatBlockGoal : Goal {

public:
    ~EatBlockGoal(); // _ZN12EatBlockGoalD2Ev
    virtual bool canUse(); // _ZN12EatBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN12EatBlockGoal16canContinueToUseEv
    virtual void start(); // _ZN12EatBlockGoal5startEv
    virtual void stop(); // _ZN12EatBlockGoal4stopEv
    virtual void tick(); // _ZN12EatBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK12EatBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    EatBlockGoal(Mob &, DefinitionTrigger const&); // _ZN12EatBlockGoalC2ER3MobRK17DefinitionTrigger
    void getEatAnimationTick(); // _ZN12EatBlockGoal19getEatAnimationTickEv
};
