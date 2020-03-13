#pragma once

#include <string>
#include "Goal.h"


class PlayerRideTamedGoal : Goal {

public:
    ~PlayerRideTamedGoal(); // _ZN19PlayerRideTamedGoalD2Ev
    virtual bool canUse(); // _ZN19PlayerRideTamedGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN19PlayerRideTamedGoal16canContinueToUseEv
    virtual void start(); // _ZN19PlayerRideTamedGoal5startEv
    virtual void tick(); // _ZN19PlayerRideTamedGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK19PlayerRideTamedGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PlayerRideTamedGoal(Mob &); // _ZN19PlayerRideTamedGoalC2ER3Mob
};
