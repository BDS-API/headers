#pragma once

#include <string>
#include "Goal.h"


class GuardianAttackGoal : Goal {

public:
    ~GuardianAttackGoal(); // _ZN18GuardianAttackGoalD2Ev
    virtual bool canUse(); // _ZN18GuardianAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18GuardianAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN18GuardianAttackGoal5startEv
    virtual void stop(); // _ZN18GuardianAttackGoal4stopEv
    virtual void tick(); // _ZN18GuardianAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18GuardianAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    GuardianAttackGoal(Guardian &); // _ZN18GuardianAttackGoalC2ER8Guardian
};
