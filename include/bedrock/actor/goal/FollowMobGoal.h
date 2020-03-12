#pragma once

#include <string>
#include "Goal.h"


class FollowMobGoal : Goal {

public:
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    ~FollowMobGoal();
    virtual void start();
    virtual void stop();
    FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob();
};
