#pragma once

#include "../../../unmapped/IntRange.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class RandomHoverGoal : Goal {

public:
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~RandomHoverGoal();
    virtual void start();
    virtual bool canUse();
    void _computeNewTarget();
    void _mobMeetsPreconditions()const;
    void _findNewTarget()const;
    RandomHoverGoal(Mob &, float, int, float, float, float, IntRange);
    void _moveToTarget();
};
