#pragma once

#include "../EnderDragon"


class DragonDeathGoal : Goal {

public:
    DragonDeathGoal::~DragonDeathGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonDeathGoal(EnderDragon &);
};
