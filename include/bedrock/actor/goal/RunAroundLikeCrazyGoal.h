#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RunAroundLikeCrazyGoal : Goal {

public:
    virtual ~RunAroundLikeCrazyGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    RunAroundLikeCrazyGoal(Mob &, float);
};
