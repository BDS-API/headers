#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class OwnerHurtByTargetGoal : TargetGoal {

public:
    OwnerHurtByTargetGoal::~OwnerHurtByTargetGoal()
    virtual bool canUse();
    virtual void start();

    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
