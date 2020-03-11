#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "./Zombie.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual ~PigZombie();
    virtual void normalTick();
    virtual void findAttackTarget();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void checkSpawnRules(bool);
    virtual void getAttackTime();

    PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _alert(Mob &);
};
