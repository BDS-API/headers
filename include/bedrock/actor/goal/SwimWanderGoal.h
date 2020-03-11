#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SwimWanderGoal : Goal {

public:
    virtual ~SwimWanderGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwimWanderGoal(Mob &, float, float, int);
    void _setWantedPosition();
    void wanderComplete();
};
