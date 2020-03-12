#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RunAroundLikeCrazyGoal : Goal {

public:
    virtual void start();
    ~RunAroundLikeCrazyGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    RunAroundLikeCrazyGoal(Mob &, float);
};
