#pragma once

#include <string>
#include "Goal.h"


class DragonTakeoffGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~DragonTakeoffGoal();
    void findNewTarget();
    void navigateToNextPathNode();
    DragonTakeoffGoal(EnderDragon &);
};
