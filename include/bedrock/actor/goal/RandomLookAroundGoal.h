#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RandomLookAroundGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~RandomLookAroundGoal();
    virtual void start();
    virtual void tick();
    RandomLookAroundGoal(Mob &, int, int, float);
};
