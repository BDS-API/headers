#pragma once

#include "../../util/Vec3.h"
#include "./Goal.h"
#include "../Mob.h"
#include "../../../unmapped/FloatRange.h"
#include <string>


class FloatWanderGoal : Goal {

public:
    virtual ~FloatWanderGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
    void _canReach(Vec3 const&, float);
};
