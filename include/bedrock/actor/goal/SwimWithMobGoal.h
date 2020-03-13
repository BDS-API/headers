#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SwimWithMobGoal : Goal {

public:
    ~SwimWithMobGoal(); // _ZN15SwimWithMobGoalD2Ev
    virtual bool canUse(); // _ZN15SwimWithMobGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15SwimWithMobGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN15SwimWithMobGoal16canBeInterruptedEv
    virtual void start(); // _ZN15SwimWithMobGoal5startEv
    virtual void stop(); // _ZN15SwimWithMobGoal4stopEv
    virtual void tick(); // _ZN15SwimWithMobGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15SwimWithMobGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwimWithMobGoal(Mob &, float, float, int, std::vector<MobDescriptor> const&); // _ZN15SwimWithMobGoalC2ER3MobffiRKSt6vectorI13MobDescriptorSaIS3_EE
    void _setWantedMob(); // _ZN15SwimWithMobGoal13_setWantedMobEv
    void _canSwimWith(Actor &); // _ZN15SwimWithMobGoal12_canSwimWithER5Actor
};
