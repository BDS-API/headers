#pragma once

#include "../Mob"
#include "../../../unmapped/Vec3"


class FloatWanderGoal : Goal {

public:
    virtual FloatWanderGoal::~FloatWanderGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange);
    void _canReach(Vec3 const&, float);
};
