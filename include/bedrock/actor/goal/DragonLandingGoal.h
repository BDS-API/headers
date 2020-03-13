#pragma once

#include <string>
#include "Goal.h"


class DragonLandingGoal : Goal {

public:
    ~DragonLandingGoal(); // _ZN17DragonLandingGoalD2Ev
    virtual bool canUse(); // _ZN17DragonLandingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17DragonLandingGoal16canContinueToUseEv
    virtual void start(); // _ZN17DragonLandingGoal5startEv
    virtual void stop(); // _ZN17DragonLandingGoal4stopEv
    virtual void tick(); // _ZN17DragonLandingGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17DragonLandingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonLandingGoal(EnderDragon &); // _ZN17DragonLandingGoalC2ER11EnderDragon
    void findNewTarget(); // _ZN17DragonLandingGoal13findNewTargetEv
    void navigateToNextPathNode(); // _ZN17DragonLandingGoal22navigateToNextPathNodeEv
};
