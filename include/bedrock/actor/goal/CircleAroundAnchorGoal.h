#pragma once

#include "../../../unmapped/FloatRange.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class CircleAroundAnchorGoal : Goal {

public:
    virtual void stop();
    ~CircleAroundAnchorGoal();
    virtual void tick();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    void _touchingTarget()const;
    void _calculateHeightOffset()const;
    void _setAnchorAboveTarget();
    void _setAnchorAboveGround();
    void _selectNext();
    CircleAroundAnchorGoal(Mob &, float, FloatRange, int, FloatRange, FloatRange, int, float);
};
