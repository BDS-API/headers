#pragma once

#include "../Mob"


class FollowMobGoal : Goal {

public:
    virtual FollowMobGoal::~FollowMobGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob();
};
