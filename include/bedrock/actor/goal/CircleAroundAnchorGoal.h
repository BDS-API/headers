#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include "../../../unmapped/FloatRange.h"
#include <string>


class CircleAroundAnchorGoal : Goal {

public:
    virtual ~CircleAroundAnchorGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    CircleAroundAnchorGoal(Mob &, float, FloatRange, int, FloatRange, FloatRange, int, float);
    void _calculateHeightOffset()const;
    void _setAnchorAboveTarget();
    void _setAnchorAboveGround();
    void _selectNext();
    void _touchingTarget()const;
};
