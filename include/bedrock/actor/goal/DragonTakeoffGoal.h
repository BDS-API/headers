#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include <string>


class DragonTakeoffGoal : Goal {

public:
    virtual ~DragonTakeoffGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonTakeoffGoal(EnderDragon &);
    void findNewTarget();
    void navigateToNextPathNode();
};
