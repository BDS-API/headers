#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class FollowMobGoal : Goal {

public:
    virtual ~FollowMobGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob();
};
