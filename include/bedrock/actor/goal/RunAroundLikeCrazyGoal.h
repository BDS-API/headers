#pragma once

#include <string>
#include "Goal.h"


class RunAroundLikeCrazyGoal : Goal {

public:
    ~RunAroundLikeCrazyGoal(); // _ZN22RunAroundLikeCrazyGoalD2Ev
    virtual bool canUse(); // _ZN22RunAroundLikeCrazyGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN22RunAroundLikeCrazyGoal16canContinueToUseEv
    virtual void start(); // _ZN22RunAroundLikeCrazyGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22RunAroundLikeCrazyGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RunAroundLikeCrazyGoal(Mob &, float); // _ZN22RunAroundLikeCrazyGoalC2ER3Mobf
};
