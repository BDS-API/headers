#pragma once

#include <vector>
#include "../../../unmapped/MobDescriptor.h"
#include "../Mob.h"
#include "TargetGoal.h"


class OwnerHurtTargetGoal : TargetGoal {

public:
    ~OwnerHurtTargetGoal();
    virtual bool canUse();
    virtual void start();
    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
