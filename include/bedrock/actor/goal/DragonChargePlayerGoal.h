#pragma once

#include <string>
#include "Goal.h"


class DragonChargePlayerGoal : Goal {

public:
    static long CHARGE_RECOVERY_TIME;
    static long SITTING_CHARGE_VIEW_RANGE;

    virtual void tick();
    virtual bool canContinueToUse();
    ~DragonChargePlayerGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    virtual void start();
    DragonChargePlayerGoal(EnderDragon &);
};
