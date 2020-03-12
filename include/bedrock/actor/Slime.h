#pragma once

#include "../util/ChunkPos.h"
#include "Monster.h"


class Slime : Monster {

public:
    virtual void aiStep();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void setSlimeSize(int);
    virtual void playJumpSound();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void checkSpawnRules(bool);
    ~Slime();
    virtual void useNewAi()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void normalTick();
    virtual void decreaseSquish();
    virtual void getShadowRadius()const;
    virtual void playerTouch(Player &);
    virtual void findAttackTarget();
    virtual bool canDealDamage();
    virtual void createChild(int);
    virtual void getSquishSound();
    virtual void onSynchedDataUpdate(int);
    virtual void doPlayJumpSound();
    virtual void remove();
    virtual void doPlayLandSound();
    virtual void playLandSound();
    void getOldSquishValue()const;
    Slime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void justJumped();
    void getTargetSquish()const;
    void _getRandomSeedFromSlimeChunk(ChunkPos);
    void getSquishValue()const;
    void justLanded();
    void getSlimeSize()const;
};
