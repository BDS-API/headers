#pragma once

#include <string>
#include "Goal.h"


class HoverGoal : Goal {

public:
    ~HoverGoal(); // _ZN9HoverGoalD2Ev
    virtual bool canUse(); // _ZN9HoverGoal6canUseEv
    virtual void start(); // _ZN9HoverGoal5startEv
    virtual void stop(); // _ZN9HoverGoal4stopEv
    virtual void tick(); // _ZN9HoverGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9HoverGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    HoverGoal(Mob &, float); // _ZN9HoverGoalC2ER3Mobf
};
