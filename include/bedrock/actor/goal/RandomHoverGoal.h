#pragma once

#include "./Goal.h"
#include "../../../unmapped/IntRange.h"
#include "../Mob.h"
#include <string>


class RandomHoverGoal : Goal {

public:
    virtual ~RandomHoverGoal();
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
