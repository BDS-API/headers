#pragma once

#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../../unmapped/MobDescriptor.h"


class TargetWhenPushedGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~TargetWhenPushedGoal();
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canBeInterrupted();
    virtual bool canUse();
    virtual void stop();
    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor>, float);
    void _isValidTarget(Actor &);
};
