#pragma once

#include <string>
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"


class FloatWanderGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    ~FloatWanderGoal();
    virtual bool canUse();
    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
    void _canReach(Vec3 const&, float);
};
