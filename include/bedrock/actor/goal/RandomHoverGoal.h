#pragma once

#include <string>
#include "Goal.h"
#include "../../../unmapped/IntRange.h"


class RandomHoverGoal : Goal {

public:
    ~RandomHoverGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual bool canContinueToUse();
    void _moveToTarget();
    void _computeNewTarget();
    void _findNewTarget()const;
    RandomHoverGoal(Mob &, float, int, float, float, float, IntRange);
    void _mobMeetsPreconditions()const;
};
