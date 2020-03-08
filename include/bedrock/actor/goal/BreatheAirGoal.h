#pragma once

#include "../Mob"


class BreatheAirGoal : Goal {

public:
    virtual BreatheAirGoal::~BreatheAirGoal()
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
