#pragma once

#include <string>
#include "Goal.h"


class RestrictSunGoal : Goal {

public:
    ~RestrictSunGoal(); // _ZN15RestrictSunGoalD2Ev
    virtual bool canUse(); // _ZN15RestrictSunGoal6canUseEv
    virtual void start(); // _ZN15RestrictSunGoal5startEv
    virtual void stop(); // _ZN15RestrictSunGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15RestrictSunGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RestrictSunGoal(Mob &); // _ZN15RestrictSunGoalC2ER3Mob
};
