#pragma once

#include <string>
#include "Goal.h"


class DragonHoldingPatternGoal : Goal {

public:
    virtual void tick();
    ~DragonHoldingPatternGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canUse();
    virtual void stop();
    DragonHoldingPatternGoal(EnderDragon &);
    void findNewTarget();
};
