#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    virtual AvoidMobTypeGoal::~AvoidMobTypeGoal()
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, float, float, float, float, bool);
};
