#pragma once

#include <string>
#include "AvoidMobGoal.h"
#include <vector>


class AvoidMobTypeGoal : AvoidMobGoal {

public:
    ~AvoidMobTypeGoal(); // _ZN16AvoidMobTypeGoalD2Ev
    virtual void appendDebugInfo(std::string &)const; // _ZNK16AvoidMobTypeGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void findNearestEntityToAvoid(float); // _ZN16AvoidMobTypeGoal24findNearestEntityToAvoidEf
    AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor> const&, float, float, float, float, float, bool); // _ZN16AvoidMobTypeGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfffffb
};
