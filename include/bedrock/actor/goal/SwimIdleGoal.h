#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SwimIdleGoal : Goal {

public:
    virtual ~SwimIdleGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwimIdleGoal(Mob &);
};
