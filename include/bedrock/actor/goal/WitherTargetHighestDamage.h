#pragma once

#include "../WitherBoss.h"
#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include <vector>
#include "TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"


class WitherTargetHighestDamage : TargetGoal {

public:
    virtual bool canContinueToUse();
    ~WitherTargetHighestDamage();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    void getHighestDamageTarget();
    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor> const&);
};
