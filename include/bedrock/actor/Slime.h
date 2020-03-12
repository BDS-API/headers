#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "../util/ChunkPos.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class Slime : Monster {

public:
    virtual bool canDealDamage();
    virtual void doPlayLandSound();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void playJumpSound();
    virtual void remove();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void findAttackTarget();
    virtual void playLandSound();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~Slime();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void onSynchedDataUpdate(int);
    virtual void getSquishSound();
    virtual void setSlimeSize(int);
    virtual void playerTouch(Player &);
    virtual void getShadowRadius()const;
    virtual void useNewAi()const;
    virtual void doPlayJumpSound();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void decreaseSquish();
    virtual void createChild(int);
    virtual void normalTick();
    Slime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getTargetSquish()const;
    void getSquishValue()const;
    void _getRandomSeedFromSlimeChunk(ChunkPos);
    void justJumped();
    void getOldSquishValue()const;
    void justLanded();
    void getSlimeSize()const;
};
