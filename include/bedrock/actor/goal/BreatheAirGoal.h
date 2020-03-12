#pragma once

#include <string>
#include "Goal.h"


class BreatheAirGoal : Goal {

public:
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canBeInterrupted();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~BreatheAirGoal();
    BreatheAirGoal(Mob &);
    void _findAirPosition();
    void _determineApproximateDepth();
};
