#pragma once

class OwnerHurtByTargetGoal : TargetGoal {

public:
    virtual ~OwnerHurtByTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);

    void OwnerHurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
