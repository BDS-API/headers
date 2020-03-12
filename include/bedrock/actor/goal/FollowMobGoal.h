#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FollowMobGoal : Goal {

public:
    virtual void start();
    ~FollowMobGoal();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob();
};
