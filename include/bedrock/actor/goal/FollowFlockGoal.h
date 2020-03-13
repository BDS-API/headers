#pragma once

#include <string>
#include "Goal.h"


class FollowFlockGoal : Goal {

public:
    ~FollowFlockGoal(); // _ZN15FollowFlockGoalD2Ev
    virtual bool canUse(); // _ZN15FollowFlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15FollowFlockGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN15FollowFlockGoal16canBeInterruptedEv
    virtual void start(); // _ZN15FollowFlockGoal5startEv
    virtual void stop(); // _ZN15FollowFlockGoal4stopEv
    virtual void tick(); // _ZN15FollowFlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15FollowFlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FollowFlockGoal(Mob &, float); // _ZN15FollowFlockGoalC2ER3Mobf
};
