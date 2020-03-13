#pragma once

#include <string>
#include "Goal.h"


class SlimeFloatGoal : Goal {

public:
    ~SlimeFloatGoal(); // _ZN14SlimeFloatGoalD2Ev
    virtual bool canUse(); // _ZN14SlimeFloatGoal6canUseEv
    virtual void tick(); // _ZN14SlimeFloatGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14SlimeFloatGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SlimeFloatGoal(Mob &); // _ZN14SlimeFloatGoalC2ER3Mob
};
