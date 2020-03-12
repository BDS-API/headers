#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class BreatheAirGoal : Goal {

public:
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canUse();
    virtual bool canBeInterrupted();
    ~BreatheAirGoal();
    virtual void appendDebugInfo(std::string &)const;
    BreatheAirGoal(Mob &);
    void _findAirPosition();
    void _determineApproximateDepth();
};
