#pragma once

#include <string>
#include "Goal.h"


class DragonLandingGoal : Goal {

public:
    virtual bool canUse();
    ~DragonLandingGoal();
    virtual void tick();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    DragonLandingGoal(EnderDragon &);
    void navigateToNextPathNode();
    void findNewTarget();
};
