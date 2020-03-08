#pragma once

#include "../Mob"
#include "../../../unmapped/IntRange"


class RandomHoverGoal : Goal {

public:
    virtual RandomHoverGoal::~RandomHoverGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RandomHoverGoal(Mob &, float, int, float, float, float, IntRange);
    void _mobMeetsPreconditions()const;
    void _computeNewTarget();
    void _moveToTarget();
    void _findNewTarget()const;
};
