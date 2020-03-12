#pragma once

#include "Mob.h"


class Monster : Mob {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void findAttackTarget();
    virtual void normalTick();
    virtual bool canExistInPeaceful()const;
    virtual void checkSpawnRules(bool);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shouldDespawn()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void aiStep();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn()const;
    ~Monster();
    Monster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
