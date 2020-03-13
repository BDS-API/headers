#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TemptGoal : Goal {

public:
    ~TemptGoal(); // _ZN9TemptGoalD2Ev
    virtual bool canUse(); // _ZN9TemptGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN9TemptGoal16canContinueToUseEv
    virtual void start(); // _ZN9TemptGoal5startEv
    virtual void stop(); // _ZN9TemptGoal4stopEv
    virtual void tick(); // _ZN9TemptGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9TemptGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TemptGoal(Mob &, float, std::vector<ItemDescriptor> const&, bool, float, bool); // _ZN9TemptGoalC2ER3MobfRKSt6vectorI14ItemDescriptorSaIS3_EEbfb
    bool isRunning(); // _ZN9TemptGoal9isRunningEv
};
