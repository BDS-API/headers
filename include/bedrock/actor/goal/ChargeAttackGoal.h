#pragma once

#include <string>
#include "Goal.h"


class ChargeAttackGoal : Goal {

public:
    ~ChargeAttackGoal(); // _ZN16ChargeAttackGoalD2Ev
    virtual bool canUse(); // _ZN16ChargeAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16ChargeAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN16ChargeAttackGoal5startEv
    virtual void stop(); // _ZN16ChargeAttackGoal4stopEv
    virtual void tick(); // _ZN16ChargeAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16ChargeAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ChargeAttackGoal(Mob &); // _ZN16ChargeAttackGoalC2ER3Mob
};
