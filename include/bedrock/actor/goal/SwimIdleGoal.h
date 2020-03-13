#pragma once

#include <string>
#include "Goal.h"


class SwimIdleGoal : Goal {

public:
    ~SwimIdleGoal(); // _ZN12SwimIdleGoalD2Ev
    virtual bool canUse(); // _ZN12SwimIdleGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN12SwimIdleGoal16canContinueToUseEv
    virtual void start(); // _ZN12SwimIdleGoal5startEv
    virtual void tick(); // _ZN12SwimIdleGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK12SwimIdleGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwimIdleGoal(Mob &); // _ZN12SwimIdleGoalC2ER3Mob
};
