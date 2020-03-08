#pragma once

#include "../EnderDragon"


class DragonLandingGoal : Goal {

public:
    virtual DragonLandingGoal::~DragonLandingGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonLandingGoal(EnderDragon &);
    void findNewTarget();
    void navigateToNextPathNode();
};
