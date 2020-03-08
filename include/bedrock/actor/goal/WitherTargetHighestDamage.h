#pragma once

#include "../Mob"
#include "../Actor"
#include "../WitherBoss"
#include "../../../unmapped/MobDescriptor"


class WitherTargetHighestDamage : TargetGoal {

public:
    virtual WitherTargetHighestDamage::~WitherTargetHighestDamage()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void getHighestDamageTarget();
};
