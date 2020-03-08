#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../block/unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../nbt/CompoundTag"


class FallingBlock : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    FallingBlock::~FallingBlock()
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual void causeFallDamage(float);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    FallingBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init();
    void _waitRemoval();
    void getFallingBlock()const;
    void _isHeavyBlock(Block const&);
    void _breakBlock();
    void setFallingBlock(Block const&, bool);
    void _canDropResource(Block const&, BlockSource const&)const;
    void setHurtEntities(bool);
};
