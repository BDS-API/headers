#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class AvoidMobGoal : Goal {

public:
    virtual void tick();
    ~AvoidMobGoal();
    virtual bool canUse();
    virtual void findNearestEntityToAvoid(float);
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    AvoidMobGoal(Mob &, float, float, float, float, float, bool);
};
