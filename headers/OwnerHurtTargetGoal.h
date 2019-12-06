#pragma once

class OwnerHurtTargetGoal : TargetGoal {

public:
    virtual ~OwnerHurtTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);

    void OwnerHurtTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
