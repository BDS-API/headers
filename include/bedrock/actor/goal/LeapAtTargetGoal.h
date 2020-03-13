#pragma once

#include <string>
#include "Goal.h"


class LeapAtTargetGoal : Goal {

public:
    ~LeapAtTargetGoal(); // _ZN16LeapAtTargetGoalD2Ev
    virtual bool canUse(); // _ZN16LeapAtTargetGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16LeapAtTargetGoal16canContinueToUseEv
    virtual void start(); // _ZN16LeapAtTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16LeapAtTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    LeapAtTargetGoal(Mob &, float, bool); // _ZN16LeapAtTargetGoalC2ER3Mobfb
};
