#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonTakeoffGoal : Goal {

public:
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    ~DragonTakeoffGoal();
    virtual void start();
    void navigateToNextPathNode();
    void findNewTarget();
    DragonTakeoffGoal(EnderDragon &);
};
