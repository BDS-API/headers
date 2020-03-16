#pragma once

#include <string>
#include "Goal.h"


class DragonStrafePlayerGoal : public Goal {

public:
    static long FIREBALL_CHARGE_AMOUNT;

    virtual ~DragonStrafePlayerGoal(); // _ZN22DragonStrafePlayerGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN22DragonStrafePlayerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN22DragonStrafePlayerGoal16canContinueToUseEv
    virtual void start(); // _ZN22DragonStrafePlayerGoal5startEv
    virtual void stop(); // _ZN22DragonStrafePlayerGoal4stopEv
    virtual void tick(); // _ZN22DragonStrafePlayerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22DragonStrafePlayerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonStrafePlayerGoal(EnderDragon &); // _ZN22DragonStrafePlayerGoalC2ER11EnderDragon
    void setTarget(Actor *); // _ZN22DragonStrafePlayerGoal9setTargetEP5Actor
    void findNewTarget(); // _ZN22DragonStrafePlayerGoal13findNewTargetEv
    void navigateToNextPathNode(); // _ZN22DragonStrafePlayerGoal22navigateToNextPathNodeEv
};
