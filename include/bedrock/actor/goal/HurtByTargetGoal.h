#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class HurtByTargetGoal : TargetGoal {

public:
    HurtByTargetGoal::~HurtByTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void alertOther(Mob *, Mob *);

    HurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool);
};
