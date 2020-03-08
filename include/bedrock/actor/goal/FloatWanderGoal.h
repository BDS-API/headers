#pragma once

#include "../Mob"
#include "../../util/Vec3"
#include "../../../unmapped/FloatRange"


class FloatWanderGoal : Goal {

public:
    virtual FloatWanderGoal::~FloatWanderGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
    void _canReach(Vec3 const&, float);
};
