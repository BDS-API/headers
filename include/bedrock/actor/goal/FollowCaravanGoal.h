#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class FollowCaravanGoal : Goal {

public:
    ~FollowCaravanGoal(); // _ZN17FollowCaravanGoalD2Ev
    virtual bool canUse(); // _ZN17FollowCaravanGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17FollowCaravanGoal16canContinueToUseEv
    virtual void start(); // _ZN17FollowCaravanGoal5startEv
    virtual void stop(); // _ZN17FollowCaravanGoal4stopEv
    virtual void tick(); // _ZN17FollowCaravanGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17FollowCaravanGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FollowCaravanGoal(Mob &, float, int, std::vector<MobDescriptor> const&); // _ZN17FollowCaravanGoalC2ER3MobfiRKSt6vectorI13MobDescriptorSaIS3_EE
    void firstIsLeashed(Mob *, int); // _ZN17FollowCaravanGoal14firstIsLeashedEP3Mobi
    void checkCaravanType(Mob *); // _ZN17FollowCaravanGoal16checkCaravanTypeEP3Mob
};
