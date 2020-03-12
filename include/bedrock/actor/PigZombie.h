#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Zombie.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~PigZombie();
    virtual void findAttackTarget();
    virtual void checkSpawnRules(bool);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getAttackTime();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void normalTick();
    PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _alert(Mob &);
};
