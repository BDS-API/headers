#pragma once

#include "TargetGoal.h"
#include <vector>


class OwnerHurtByTargetGoal : TargetGoal {

public:
    ~OwnerHurtByTargetGoal(); // _ZN21OwnerHurtByTargetGoalD2Ev
    virtual bool canUse(); // _ZN21OwnerHurtByTargetGoal6canUseEv
    virtual void start(); // _ZN21OwnerHurtByTargetGoal5startEv
    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&); // _ZN21OwnerHurtByTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EE
};
