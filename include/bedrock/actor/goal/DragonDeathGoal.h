#pragma once

#include <string>
#include "Goal.h"


class DragonDeathGoal : Goal {

public:
    virtual void tick();
    virtual void stop();
    ~DragonDeathGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    DragonDeathGoal(EnderDragon &);
};
