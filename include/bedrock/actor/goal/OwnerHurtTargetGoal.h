#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class OwnerHurtTargetGoal : TargetGoal {

public:
    virtual OwnerHurtTargetGoal::~OwnerHurtTargetGoal()
    virtual bool canUse();
    virtual void start();

    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
