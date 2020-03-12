#pragma once

#include <vector>
#include "../../../unmapped/MobDescriptor.h"
#include "../Mob.h"
#include "TargetGoal.h"


class OwnerHurtByTargetGoal : TargetGoal {

public:
    virtual void start();
    ~OwnerHurtByTargetGoal();
    virtual bool canUse();
    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
