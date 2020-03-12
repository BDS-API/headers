#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TargetWhenPushedGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    virtual bool canBeInterrupted();
    ~TargetWhenPushedGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    void _isValidTarget(Actor &);
    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor>, float);
};
