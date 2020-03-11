#pragma once

#include <memory>
#include "./TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"


class OwnerHurtByTargetGoal : TargetGoal {

public:
    virtual ~OwnerHurtByTargetGoal();
    virtual bool canUse();
    virtual void start();

    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
