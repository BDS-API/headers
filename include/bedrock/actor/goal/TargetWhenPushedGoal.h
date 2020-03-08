#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"
#include "../Actor"


class TargetWhenPushedGoal : Goal {

public:
    virtual TargetWhenPushedGoal::~TargetWhenPushedGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>>, float);
    void _isValidTarget(Actor &);
};
