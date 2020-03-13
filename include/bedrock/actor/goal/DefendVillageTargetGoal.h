#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class DefendVillageTargetGoal : TargetGoal {

public:
    ~DefendVillageTargetGoal(); // _ZN23DefendVillageTargetGoalD2Ev
    virtual bool canUse(); // _ZN23DefendVillageTargetGoal6canUseEv
    virtual void start(); // _ZN23DefendVillageTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23DefendVillageTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN23DefendVillageTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
