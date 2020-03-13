#pragma once

#include "Monster.h"
#include "../util/ChunkPos.h"


class Slime : Monster {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Slime15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Slime(); // _ZN5SlimeD2Ev
    virtual void remove(); // _ZN5Slime6removeEv
    virtual void normalTick(); // _ZN5Slime10normalTickEv
    virtual void getShadowRadius()const; // _ZNK5Slime15getShadowRadiusEv
    virtual void playerTouch(Player &); // _ZN5Slime11playerTouchER6Player
    virtual void findAttackTarget(); // _ZN5Slime16findAttackTargetEv
    virtual void onSynchedDataUpdate(int); // _ZN5Slime19onSynchedDataUpdateEi
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN5Slime22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN5Slime21addAdditionalSaveDataER11CompoundTag
    virtual void aiStep(); // _ZN5Slime6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN5Slime15checkSpawnRulesEb
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN5Slime19_getWalkTargetValueERK8BlockPos
    virtual void useNewAi()const; // _ZNK5Slime8useNewAiEv
    virtual bool canDealDamage(); // _ZN5Slime13canDealDamageEv
    virtual void getSquishSound(); // _ZN5Slime14getSquishSoundEv
    virtual void setSlimeSize(int); // _ZN5Slime12setSlimeSizeEi
    virtual void doPlayJumpSound(); // _ZN5Slime15doPlayJumpSoundEv
    virtual void doPlayLandSound(); // _ZN5Slime15doPlayLandSoundEv
    virtual void playJumpSound(); // _ZN5Slime13playJumpSoundEv
    virtual void playLandSound(); // _ZN5Slime13playLandSoundEv
    virtual void decreaseSquish(); // _ZN5Slime14decreaseSquishEv
    virtual void createChild(int); // _ZN5Slime11createChildEi
    Slime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5SlimeC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getSlimeSize()const; // _ZNK5Slime12getSlimeSizeEv
    void justLanded(); // _ZN5Slime10justLandedEv
    void justJumped(); // _ZN5Slime10justJumpedEv
    void _getRandomSeedFromSlimeChunk(ChunkPos); // _ZN5Slime28_getRandomSeedFromSlimeChunkE8ChunkPos
    void getSquishValue()const; // _ZNK5Slime14getSquishValueEv
    void getOldSquishValue()const; // _ZNK5Slime17getOldSquishValueEv
    void getTargetSquish()const; // _ZNK5Slime15getTargetSquishEv
};
