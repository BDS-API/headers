#pragma once

#include <string>
#include "Goal.h"


class DragonStrafePlayerGoal : Goal {

public:
    static long FIREBALL_CHARGE_AMOUNT;

    ~DragonStrafePlayerGoal();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    void findNewTarget();
    DragonStrafePlayerGoal(EnderDragon &);
    void setTarget(Actor *);
    void navigateToNextPathNode();
};
