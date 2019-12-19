#pragma once

class Monster : Mob {

public:
    virtual Monster::~Monster();
    virtual void normalTick(void);
    virtual bool canExistInPeaceful(void)const;
    virtual void findAttackTarget(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn(void)const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn(void)const;

    Monster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
