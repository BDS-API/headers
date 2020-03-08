#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual PigZombie::~PigZombie()
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
