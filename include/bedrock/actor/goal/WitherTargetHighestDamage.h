#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class WitherTargetHighestDamage : TargetGoal {

public:
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    ~WitherTargetHighestDamage();
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    virtual void appendDebugInfo(std::string &)const;
    void getHighestDamageTarget();
    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor> const&);
};
