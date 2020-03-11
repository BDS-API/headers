#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include <string>


class DragonDeathGoal : Goal {

public:
    virtual ~DragonDeathGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonDeathGoal(EnderDragon &);
};
