#pragma once

#include "TargetGoal.h"
#include <string>
#include <vector>


class DefendVillageTargetGoal : public TargetGoal {

public:
    virtual ~DefendVillageTargetGoal(); // _ZN23DefendVillageTargetGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN23DefendVillageTargetGoal6canUseEv
    virtual void start(); // _ZN23DefendVillageTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23DefendVillageTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN23DefendVillageTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
