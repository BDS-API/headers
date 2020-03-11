#pragma once

#include "../Actor.h"
#include <memory>
#include "./TargetGoal.h"
#include "../WitherBoss.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"
#include <string>


class WitherTargetHighestDamage : TargetGoal {

public:
    virtual ~WitherTargetHighestDamage();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void getHighestDamageTarget();
};
