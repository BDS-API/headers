#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Monster : Mob {

public:
    Monster::~Monster()
    virtual void normalTick();
    virtual bool canExistInPeaceful()const;
    virtual void findAttackTarget();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn()const;

    Monster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
