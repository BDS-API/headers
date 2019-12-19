#pragma once

class HurtByTargetGoal : TargetGoal {

public:
    virtual HurtByTargetGoal::~HurtByTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void alertOther(Mob *, Mob *);

    HurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool);
};
