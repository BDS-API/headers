#pragma once

#include <string>
#include "Goal.h"


class RandomLookAroundGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void tick();
    ~RandomLookAroundGoal();
    RandomLookAroundGoal(Mob &, int, int, float);
};
