#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include <string>


class DragonLandingGoal : Goal {

public:
    virtual ~DragonLandingGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonLandingGoal(EnderDragon &);
    void findNewTarget();
    void navigateToNextPathNode();
};
