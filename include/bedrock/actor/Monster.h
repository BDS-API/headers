#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Monster : Mob {

public:
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~Monster();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isDarkEnoughToSpawn()const;
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn()const;
    virtual void normalTick();
    virtual bool canExistInPeaceful()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void findAttackTarget();
    Monster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
