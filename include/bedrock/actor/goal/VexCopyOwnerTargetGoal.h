#pragma once

#include "TargetGoal.h"
#include <string>
#include <vector>


class VexCopyOwnerTargetGoal : public TargetGoal {

public:
    virtual ~VexCopyOwnerTargetGoal(); // _ZN22VexCopyOwnerTargetGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN22VexCopyOwnerTargetGoal6canUseEv
    virtual void start(); // _ZN22VexCopyOwnerTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22VexCopyOwnerTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN22VexCopyOwnerTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
