#pragma once

#include <string>
#include "Goal.h"


class FloatGoal : Goal {

public:
    ~FloatGoal(); // _ZN9FloatGoalD2Ev
    virtual bool canUse(); // _ZN9FloatGoal6canUseEv
    virtual void tick(); // _ZN9FloatGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9FloatGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FloatGoal(Mob &); // _ZN9FloatGoalC2ER3Mob
};
