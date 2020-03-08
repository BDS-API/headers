#pragma once

#include "../Mob"


class RiverFollowingGoal : Goal {

public:
    virtual RiverFollowingGoal::~RiverFollowingGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RiverFollowingGoal(Mob &, float, float);
    void determineSteerDirection();
};
