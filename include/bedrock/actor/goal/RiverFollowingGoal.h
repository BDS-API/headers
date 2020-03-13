#pragma once

#include <string>
#include "Goal.h"


class RiverFollowingGoal : Goal {

public:
    ~RiverFollowingGoal(); // _ZN18RiverFollowingGoalD2Ev
    virtual bool canUse(); // _ZN18RiverFollowingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18RiverFollowingGoal16canContinueToUseEv
    virtual void start(); // _ZN18RiverFollowingGoal5startEv
    virtual void stop(); // _ZN18RiverFollowingGoal4stopEv
    virtual void tick(); // _ZN18RiverFollowingGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18RiverFollowingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RiverFollowingGoal(Mob &, float, float); // _ZN18RiverFollowingGoalC2ER3Mobff
    void determineSteerDirection(); // _ZN18RiverFollowingGoal23determineSteerDirectionEv
};
