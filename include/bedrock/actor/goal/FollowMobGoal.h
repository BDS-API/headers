#pragma once

#include <string>
#include "Goal.h"


class FollowMobGoal : Goal {

public:
    ~FollowMobGoal(); // _ZN13FollowMobGoalD2Ev
    virtual bool canUse(); // _ZN13FollowMobGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13FollowMobGoal16canContinueToUseEv
    virtual void start(); // _ZN13FollowMobGoal5startEv
    virtual void stop(); // _ZN13FollowMobGoal4stopEv
    virtual void tick(); // _ZN13FollowMobGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13FollowMobGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FollowMobGoal(Mob &, float, float, int); // _ZN13FollowMobGoalC2ER3Mobffi
    void _setWantedMob(); // _ZN13FollowMobGoal13_setWantedMobEv
};
