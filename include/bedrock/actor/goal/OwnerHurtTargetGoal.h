#pragma once

#include "TargetGoal.h"
#include <vector>


class OwnerHurtTargetGoal : public TargetGoal {

public:
    virtual ~OwnerHurtTargetGoal(); // _ZN19OwnerHurtTargetGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN19OwnerHurtTargetGoal6canUseEv
    virtual void start(); // _ZN19OwnerHurtTargetGoal5startEv
    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN19OwnerHurtTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
