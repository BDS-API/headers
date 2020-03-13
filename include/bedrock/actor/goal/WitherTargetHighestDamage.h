#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class WitherTargetHighestDamage : TargetGoal {

public:
    ~WitherTargetHighestDamage(); // _ZN25WitherTargetHighestDamageD2Ev
    virtual bool canUse(); // _ZN25WitherTargetHighestDamage6canUseEv
    virtual bool canContinueToUse(); // _ZN25WitherTargetHighestDamage16canContinueToUseEv
    virtual void start(); // _ZN25WitherTargetHighestDamage5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK25WitherTargetHighestDamage15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**); // _ZN25WitherTargetHighestDamage10_canAttackEP3MobP5ActorbbPPK13MobDescriptor
    WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor> const&); // _ZN25WitherTargetHighestDamageC2ER10WitherBossRKSt6vectorI13MobDescriptorSaIS3_EE
    void getHighestDamageTarget(); // _ZN25WitherTargetHighestDamage22getHighestDamageTargetEv
};
