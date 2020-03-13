#pragma once

#include "Zombie.h"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    ~PigZombie(); // _ZN9PigZombieD2Ev
    virtual void normalTick(); // _ZN9PigZombie10normalTickEv
    virtual void findAttackTarget(); // _ZN9PigZombie16findAttackTargetEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN9PigZombie5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN9PigZombie22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9PigZombie21addAdditionalSaveDataER11CompoundTag
    virtual void checkSpawnRules(bool); // _ZN9PigZombie15checkSpawnRulesEb
    virtual void getAttackTime(); // _ZN9PigZombie13getAttackTimeEv
    PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9PigZombieC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _alert(Mob &); // _ZN9PigZombie6_alertER3Mob
};
