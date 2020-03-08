#pragma once

#include "../Mob"


class FollowFlockGoal : Goal {

public:
    virtual FollowFlockGoal::~FollowFlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowFlockGoal(Mob &, float);
};
