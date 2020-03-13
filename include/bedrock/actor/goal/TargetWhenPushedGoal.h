#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TargetWhenPushedGoal : Goal {

public:
    ~TargetWhenPushedGoal(); // _ZN20TargetWhenPushedGoalD2Ev
    virtual bool canUse(); // _ZN20TargetWhenPushedGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN20TargetWhenPushedGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN20TargetWhenPushedGoal16canBeInterruptedEv
    virtual void start(); // _ZN20TargetWhenPushedGoal5startEv
    virtual void stop(); // _ZN20TargetWhenPushedGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20TargetWhenPushedGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor>, float); // _ZN20TargetWhenPushedGoalC2ER3MobSt6vectorI13MobDescriptorSaIS3_EEf
    void _isValidTarget(Actor &); // _ZN20TargetWhenPushedGoal14_isValidTargetER5Actor
};
