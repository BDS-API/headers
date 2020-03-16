#pragma once

#include <string>
#include "Goal.h"


class FollowParentGoal : public Goal {

public:
    virtual ~FollowParentGoal(); // _ZN16FollowParentGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN16FollowParentGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16FollowParentGoal16canContinueToUseEv
    virtual void start(); // _ZN16FollowParentGoal5startEv
    virtual void stop(); // _ZN16FollowParentGoal4stopEv
    virtual void tick(); // _ZN16FollowParentGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16FollowParentGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FollowParentGoal(Mob &, float); // _ZN16FollowParentGoalC2ER3Mobf
};
