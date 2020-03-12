#pragma once

#include <string>
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"


class CircleAroundAnchorGoal : Goal {

public:
    virtual bool canUse();
    ~CircleAroundAnchorGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    virtual void tick();
    void _setAnchorAboveGround();
    void _setAnchorAboveTarget();
    void _selectNext();
    CircleAroundAnchorGoal(Mob &, float, FloatRange, int, FloatRange, FloatRange, int, float);
    void _calculateHeightOffset()const;
    void _touchingTarget()const;
};
