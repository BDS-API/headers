#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    AvoidMobTypeGoal::~AvoidMobTypeGoal()
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, float, float, float, float, bool);
};
