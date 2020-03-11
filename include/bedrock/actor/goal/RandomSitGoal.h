#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RandomSitGoal : Goal {

public:
    virtual ~RandomSitGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    RandomSitGoal(Mob &, float, float, float, float);
};
