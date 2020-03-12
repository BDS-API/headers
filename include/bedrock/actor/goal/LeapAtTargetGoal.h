#pragma once

#include <string>
#include "Goal.h"


class LeapAtTargetGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~LeapAtTargetGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    LeapAtTargetGoal(Mob &, float, bool);
};
