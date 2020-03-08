#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class HurtByTargetGoal : TargetGoal {

public:
    virtual HurtByTargetGoal::~HurtByTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void alertOther(Mob *, Mob *);

    HurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool);
};
