#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    PigZombie::~PigZombie()
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
