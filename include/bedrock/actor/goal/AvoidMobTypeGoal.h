#pragma once

#include <string>
#include "AvoidMobGoal.h"
#include <vector>


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    virtual void findNearestEntityToAvoid(float);
    ~AvoidMobTypeGoal();
    virtual void appendDebugInfo(std::string &)const;
    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor> const&, float, float, float, float, float, bool);
};
