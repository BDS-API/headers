#pragma once

#include <string>
#include "Goal.h"


class AvoidMobGoal : Goal {

public:
    ~AvoidMobGoal(); // _ZN12AvoidMobGoalD2Ev
    virtual bool canUse(); // _ZN12AvoidMobGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN12AvoidMobGoal16canContinueToUseEv
    virtual void start(); // _ZN12AvoidMobGoal5startEv
    virtual void stop(); // _ZN12AvoidMobGoal4stopEv
    virtual void tick(); // _ZN12AvoidMobGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK12AvoidMobGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void findNearestEntityToAvoid(float); // _ZN12AvoidMobGoal24findNearestEntityToAvoidEf
    AvoidMobGoal(Mob &, float, float, float, float, float, bool); // _ZN12AvoidMobGoalC2ER3Mobfffffb
};
