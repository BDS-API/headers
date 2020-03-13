#pragma once

#include <string>
#include "Goal.h"


class SitGoal : Goal {

public:
    ~SitGoal(); // _ZN7SitGoalD2Ev
    virtual bool canUse(); // _ZN7SitGoal6canUseEv
    virtual void start(); // _ZN7SitGoal5startEv
    virtual void stop(); // _ZN7SitGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK7SitGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SitGoal(Mob &); // _ZN7SitGoalC2ER3Mob
};
