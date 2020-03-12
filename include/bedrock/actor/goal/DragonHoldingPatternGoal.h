#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonHoldingPatternGoal : Goal {

public:
    ~DragonHoldingPatternGoal();
    virtual void start();
    virtual void stop();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    void findNewTarget();
    DragonHoldingPatternGoal(EnderDragon &);
};
