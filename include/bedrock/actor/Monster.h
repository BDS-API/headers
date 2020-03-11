#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Monster : Mob {

public:
    virtual ~Monster();
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
