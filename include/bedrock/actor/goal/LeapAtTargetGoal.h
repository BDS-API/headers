#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class LeapAtTargetGoal : Goal {

public:
    virtual ~LeapAtTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    LeapAtTargetGoal(Mob &, float, bool);
};
