#pragma once

#include "../Actor.h"
#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonStrafePlayerGoal : Goal {

public:
    static long FIREBALL_CHARGE_AMOUNT;

    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~DragonStrafePlayerGoal();
    virtual void stop();
    virtual bool canUse();
    virtual void start();
    void findNewTarget();
    DragonStrafePlayerGoal(EnderDragon &);
    void setTarget(Actor *);
    void navigateToNextPathNode();
};
