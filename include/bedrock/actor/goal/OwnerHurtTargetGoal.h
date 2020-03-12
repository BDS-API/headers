#pragma once

#include "TargetGoal.h"
#include <vector>


class OwnerHurtTargetGoal : TargetGoal {

public:
    ~OwnerHurtTargetGoal();
    virtual void start();
    virtual bool canUse();
    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
