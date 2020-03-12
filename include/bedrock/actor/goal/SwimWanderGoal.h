#pragma once

#include <string>
#include "Goal.h"


class SwimWanderGoal : Goal {

public:
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~SwimWanderGoal();
    virtual void start();
    virtual bool canContinueToUse();
    virtual bool canUse();
    SwimWanderGoal(Mob &, float, float, int);
    void _setWantedPosition();
    void wanderComplete();
};
