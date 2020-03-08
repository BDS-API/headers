#pragma once

#include "../Mob"


class OwnerHurtByTargetGoal : TargetGoal {

public:
    virtual OwnerHurtByTargetGoal::~OwnerHurtByTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);

    OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
