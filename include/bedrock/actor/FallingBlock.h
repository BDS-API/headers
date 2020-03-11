#pragma once

#include "../block/unmapped/BlockSource.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class FallingBlock : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~FallingBlock();
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
