#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonDeathGoal : Goal {

public:
    virtual void tick();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~DragonDeathGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual bool canUse();
    DragonDeathGoal(EnderDragon &);
};
