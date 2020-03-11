#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RandomLookAroundGoal : Goal {

public:
    virtual ~RandomLookAroundGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RandomLookAroundGoal(Mob &, int, int, float);
};
