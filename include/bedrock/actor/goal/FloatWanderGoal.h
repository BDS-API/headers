#pragma once

#include "../../../unmapped/FloatRange"
#include "../Mob"
#include "../../util/Vec3"


class FloatWanderGoal : Goal {

public:
    FloatWanderGoal::~FloatWanderGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
    void _canReach(Vec3 const&, float);
};
