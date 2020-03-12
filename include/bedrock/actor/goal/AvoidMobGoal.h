#pragma once

#include <string>
#include "Goal.h"


class AvoidMobGoal : Goal {

public:
    virtual void findNearestEntityToAvoid(float);
    virtual void start();
    virtual void stop();
    ~AvoidMobGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void tick();
    AvoidMobGoal(Mob &, float, float, float, float, float, bool);
};
