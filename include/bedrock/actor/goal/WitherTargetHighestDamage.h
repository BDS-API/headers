#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Actor"
#include "../Mob"
#include "../WitherBoss"


class WitherTargetHighestDamage : TargetGoal {

public:
    WitherTargetHighestDamage::~WitherTargetHighestDamage()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void getHighestDamageTarget();
};
