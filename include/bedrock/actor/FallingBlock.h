#pragma once

#include "Actor.h"


class FallingBlock : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12FallingBlock15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12FallingBlock21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~FallingBlock(); // _ZN12FallingBlockD2Ev
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN12FallingBlock10teleportToERK4Vec3bii
    virtual void normalTick(); // _ZN12FallingBlock10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN12FallingBlock19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK12FallingBlock15getShadowRadiusEv
    virtual bool isPickable(); // _ZN12FallingBlock10isPickableEv
    virtual void causeFallDamage(float); // _ZN12FallingBlock15causeFallDamageEf
    virtual void getDeletionDelayTimeSeconds()const; // _ZNK12FallingBlock27getDeletionDelayTimeSecondsEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN12FallingBlock5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN12FallingBlock22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN12FallingBlock21addAdditionalSaveDataER11CompoundTag
    FallingBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12FallingBlockC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _init(); // _ZN12FallingBlock5_initEv
    void _waitRemoval(); // _ZN12FallingBlock12_waitRemovalEv
    void getFallingBlock()const; // _ZNK12FallingBlock15getFallingBlockEv
    void _isHeavyBlock(Block const&); // _ZN12FallingBlock13_isHeavyBlockERK5Block
    void _breakBlock(); // _ZN12FallingBlock11_breakBlockEv
    void setFallingBlock(Block const&, bool); // _ZN12FallingBlock15setFallingBlockERK5Blockb
    void _canDropResource(Block const&, BlockSource const&)const; // _ZNK12FallingBlock16_canDropResourceERK5BlockRK11BlockSource
    void setHurtEntities(bool); // _ZN12FallingBlock15setHurtEntitiesEb
};
