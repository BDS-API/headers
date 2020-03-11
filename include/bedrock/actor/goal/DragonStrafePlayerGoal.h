#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include "../Actor.h"
#include <string>


class DragonStrafePlayerGoal : Goal {

public:
    static long FIREBALL_CHARGE_AMOUNT;

    virtual ~DragonStrafePlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonStrafePlayerGoal(EnderDragon &);
    void setTarget(Actor *);
    void findNewTarget();
    void navigateToNextPathNode();
};
