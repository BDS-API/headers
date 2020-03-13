#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    ~VexCopyOwnerTargetGoal(); // _ZN22VexCopyOwnerTargetGoalD2Ev
    virtual bool canUse(); // _ZN22VexCopyOwnerTargetGoal6canUseEv
    virtual void start(); // _ZN22VexCopyOwnerTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22VexCopyOwnerTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN22VexCopyOwnerTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
