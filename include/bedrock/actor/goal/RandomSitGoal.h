#pragma once

#include <string>
#include "Goal.h"


class RandomSitGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    ~RandomSitGoal();
    virtual void start();
    virtual bool canContinueToUse();
    RandomSitGoal(Mob &, float, float, float, float);
};
