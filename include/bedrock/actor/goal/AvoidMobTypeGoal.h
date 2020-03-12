#pragma once

#include <string>
#include "AvoidMobGoal.h"
#include "../Mob.h"
#include <vector>
#include "../../../unmapped/MobDescriptor.h"


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    ~AvoidMobTypeGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);
    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor> const&, float, float, float, float, float, bool);
};
