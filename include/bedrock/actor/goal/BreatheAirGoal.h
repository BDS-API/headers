#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class BreatheAirGoal : Goal {

public:
    virtual ~BreatheAirGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BreatheAirGoal(Mob &);
    void _determineApproximateDepth();
    void _findAirPosition();
};
