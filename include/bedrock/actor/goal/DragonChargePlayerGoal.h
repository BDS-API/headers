#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonChargePlayerGoal : Goal {

public:
    static long CHARGE_RECOVERY_TIME;
    static long SITTING_CHARGE_VIEW_RANGE;

    virtual void start();
    virtual void stop();
    ~DragonChargePlayerGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    DragonChargePlayerGoal(EnderDragon &);
};
