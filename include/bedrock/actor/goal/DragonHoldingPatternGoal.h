#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include <string>


class DragonHoldingPatternGoal : Goal {

public:
    virtual ~DragonHoldingPatternGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonHoldingPatternGoal(EnderDragon &);
    void findNewTarget();
};
