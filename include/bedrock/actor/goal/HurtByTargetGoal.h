#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class HurtByTargetGoal : TargetGoal {

public:
    ~HurtByTargetGoal(); // _ZN16HurtByTargetGoalD2Ev
    virtual bool canUse(); // _ZN16HurtByTargetGoal6canUseEv
    virtual void start(); // _ZN16HurtByTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16HurtByTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void alertOther(Mob *, Mob *); // _ZN16HurtByTargetGoal10alertOtherEP3MobS1_
    HurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&, bool); // _ZN16HurtByTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEb
};
