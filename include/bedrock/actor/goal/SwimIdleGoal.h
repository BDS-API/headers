#pragma once

#include <string>
#include "Goal.h"


class SwimIdleGoal : Goal {

public:
    virtual void start();
    ~SwimIdleGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    SwimIdleGoal(Mob &);
};
