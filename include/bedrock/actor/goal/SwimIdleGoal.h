#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SwimIdleGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~SwimIdleGoal();
    virtual void tick();
    virtual void start();
    SwimIdleGoal(Mob &);
};
