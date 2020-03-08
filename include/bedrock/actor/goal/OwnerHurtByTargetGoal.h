#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class OwnerHurtByTargetGoal : TargetGoal {

public:
    virtual OwnerHurtByTargetGoal::~OwnerHurtByTargetGoal()
    virtual bool canUse();
    virtual void start();

    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
