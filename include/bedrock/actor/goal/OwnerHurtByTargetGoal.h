#pragma once

#include "TargetGoal.h"
#include <vector>


class OwnerHurtByTargetGoal : TargetGoal {

public:
    ~OwnerHurtByTargetGoal();
    virtual bool canUse();
    virtual void start();
    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
