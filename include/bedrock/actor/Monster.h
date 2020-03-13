#pragma once

#include "Mob.h"


class Monster : Mob {

public:
    ~Monster(); // _ZN7MonsterD2Ev
    virtual void normalTick(); // _ZN7Monster10normalTickEv
    virtual bool canExistInPeaceful()const; // _ZNK7Monster18canExistInPeacefulEv
    virtual void findAttackTarget(); // _ZN7Monster16findAttackTargetEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN7Monster5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN7Monster22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN7Monster21addAdditionalSaveDataER11CompoundTag
    virtual void aiStep(); // _ZN7Monster6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN7Monster15checkSpawnRulesEb
    virtual void shouldDespawn()const; // _ZNK7Monster13shouldDespawnEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN7Monster19_getWalkTargetValueERK8BlockPos
    virtual bool isDarkEnoughToSpawn()const; // _ZNK7Monster19isDarkEnoughToSpawnEv
    Monster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7MonsterC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
