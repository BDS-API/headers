#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SwimWanderGoal : Goal {

public:
    virtual void start();
    virtual void tick();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~SwimWanderGoal();
    virtual bool canContinueToUse();
    void _setWantedPosition();
    void wanderComplete();
    SwimWanderGoal(Mob &, float, float, int);
};
