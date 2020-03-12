#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonLandingGoal : Goal {

public:
    virtual bool canUse();
    ~DragonLandingGoal();
    virtual void tick();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    void findNewTarget();
    DragonLandingGoal(EnderDragon &);
    void navigateToNextPathNode();
};
