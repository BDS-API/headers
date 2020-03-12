#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"


class FloatWanderGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    ~FloatWanderGoal();
    void _canReach(Vec3 const&, float);
    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
};
