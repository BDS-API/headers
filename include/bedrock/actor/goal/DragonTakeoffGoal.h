#pragma once

#include <string>
#include "Goal.h"


class DragonTakeoffGoal : Goal {

public:
    ~DragonTakeoffGoal(); // _ZN17DragonTakeoffGoalD2Ev
    virtual bool canUse(); // _ZN17DragonTakeoffGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17DragonTakeoffGoal16canContinueToUseEv
    virtual void start(); // _ZN17DragonTakeoffGoal5startEv
    virtual void stop(); // _ZN17DragonTakeoffGoal4stopEv
    virtual void tick(); // _ZN17DragonTakeoffGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17DragonTakeoffGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonTakeoffGoal(EnderDragon &); // _ZN17DragonTakeoffGoalC2ER11EnderDragon
    void findNewTarget(); // _ZN17DragonTakeoffGoal13findNewTargetEv
    void navigateToNextPathNode(); // _ZN17DragonTakeoffGoal22navigateToNextPathNodeEv
};
