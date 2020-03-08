#pragma once

#include "../Mob"


class OwnerHurtTargetGoal : TargetGoal {

public:
    virtual OwnerHurtTargetGoal::~OwnerHurtTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);

    OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
