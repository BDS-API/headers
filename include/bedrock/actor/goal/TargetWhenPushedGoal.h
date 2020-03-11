#pragma once

#include "../Actor.h"
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class TargetWhenPushedGoal : Goal {

public:
    virtual ~TargetWhenPushedGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>>, float);
    void _isValidTarget(Actor &);
};
