#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class LeapAtTargetGoal : Goal {

public:
    virtual void start();
    virtual bool canUse();
    virtual bool canContinueToUse();
    ~LeapAtTargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    LeapAtTargetGoal(Mob &, float, bool);
};
