#pragma once

#include <string>
#include "Goal.h"


class RestrictSunGoal : public Goal {

public:
    virtual ~RestrictSunGoal(); // _ZN15RestrictSunGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN15RestrictSunGoal6canUseEv
    virtual void start(); // _ZN15RestrictSunGoal5startEv
    virtual void stop(); // _ZN15RestrictSunGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15RestrictSunGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RestrictSunGoal(Mob &); // _ZN15RestrictSunGoalC2ER3Mob
};
