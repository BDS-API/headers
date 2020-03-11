#pragma once

#include <memory>
#include "./TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"


class OwnerHurtTargetGoal : TargetGoal {

public:
    virtual ~OwnerHurtTargetGoal();
    virtual bool canUse();
    virtual void start();

    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
