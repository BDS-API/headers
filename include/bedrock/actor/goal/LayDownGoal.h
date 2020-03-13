#pragma once

#include <string>
#include "Goal.h"


class LayDownGoal : Goal {

public:
    ~LayDownGoal(); // _ZN11LayDownGoalD2Ev
    virtual bool canUse(); // _ZN11LayDownGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN11LayDownGoal16canContinueToUseEv
    virtual void start(); // _ZN11LayDownGoal5startEv
    virtual void stop(); // _ZN11LayDownGoal4stopEv
    virtual void tick(); // _ZN11LayDownGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK11LayDownGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    LayDownGoal(Mob &, int, int); // _ZN11LayDownGoalC2ER3Mobii
};
