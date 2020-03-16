#pragma once

#include "TargetGoal.h"
#include <string>
#include <vector>


class HurtByTargetGoal : public TargetGoal {

public:
    virtual ~HurtByTargetGoal(); // _ZN16HurtByTargetGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN16HurtByTargetGoal6canUseEv
    virtual void start(); // _ZN16HurtByTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16HurtByTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void alertOther(Mob *, Mob *); // _ZN16HurtByTargetGoal10alertOtherEP3MobS1_
    HurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&, bool); // _ZN16HurtByTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEb
};
