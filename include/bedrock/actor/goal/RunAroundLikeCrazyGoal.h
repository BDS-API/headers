#pragma once

#include <string>
#include "Goal.h"


class RunAroundLikeCrazyGoal : Goal {

public:
    virtual bool canContinueToUse();
    ~RunAroundLikeCrazyGoal();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    RunAroundLikeCrazyGoal(Mob &, float);
};
