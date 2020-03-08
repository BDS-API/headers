#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/ChunkPos"
#include "../util/BlockPos"
#include "../nbt/CompoundTag"


class Slime : Monster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Slime::~Slime()
    virtual void remove();
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void playerTouch(Player &);
    virtual void findAttackTarget();
    virtual void onSynchedDataUpdate(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;
    virtual bool canDealDamage();
    virtual void getSquishSound();
    virtual void setSlimeSize(int);
    virtual void doPlayJumpSound();
    virtual void doPlayLandSound();
    virtual void playJumpSound();
    virtual void playLandSound();
    virtual void decreaseSquish();
    virtual void createChild(int);

    Slime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getSlimeSize()const;
    void justLanded();
    void justJumped();
    void _getRandomSeedFromSlimeChunk(ChunkPos);
    void getSquishValue()const;
    void getOldSquishValue()const;
    void getTargetSquish()const;
};
