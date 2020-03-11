#pragma once

#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./AvoidMobGoal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    virtual ~AvoidMobTypeGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, float, float, float, float, bool);
};
