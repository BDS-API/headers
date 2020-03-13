#pragma once

#include <string>
#include "Goal.h"


class SlimeAttackGoal : Goal {

public:
    ~SlimeAttackGoal(); // _ZN15SlimeAttackGoalD2Ev
    virtual bool canUse(); // _ZN15SlimeAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15SlimeAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN15SlimeAttackGoal5startEv
    virtual void tick(); // _ZN15SlimeAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15SlimeAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SlimeAttackGoal(Mob &); // _ZN15SlimeAttackGoalC2ER3Mob
};
