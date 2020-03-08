#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class OwnerHurtTargetGoal : TargetGoal {

public:
    OwnerHurtTargetGoal::~OwnerHurtTargetGoal()
    virtual bool canUse();
    virtual void start();

    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
