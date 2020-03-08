#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual PigZombie::~PigZombie();
    virtual void normalTick(void);
    virtual void findAttackTarget(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void checkSpawnRules(bool);
    virtual void getAttackTime(void);

    PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _alert(Mob &);
};
