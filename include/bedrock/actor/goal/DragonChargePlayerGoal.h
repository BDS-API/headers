#pragma once

#include <string>
#include "Goal.h"


class DragonChargePlayerGoal : Goal {

public:
    static long CHARGE_RECOVERY_TIME;
    static long SITTING_CHARGE_VIEW_RANGE;

    ~DragonChargePlayerGoal(); // _ZN22DragonChargePlayerGoalD2Ev
    virtual bool canUse(); // _ZN22DragonChargePlayerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN22DragonChargePlayerGoal16canContinueToUseEv
    virtual void start(); // _ZN22DragonChargePlayerGoal5startEv
    virtual void stop(); // _ZN22DragonChargePlayerGoal4stopEv
    virtual void tick(); // _ZN22DragonChargePlayerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22DragonChargePlayerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonChargePlayerGoal(EnderDragon &); // _ZN22DragonChargePlayerGoalC2ER11EnderDragon
};
