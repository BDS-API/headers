#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "../block/unmapped/BlockSource.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class FallingBlock : Actor {

public:
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual void causeFallDamage(float);
    ~FallingBlock();
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    void _canDropResource(Block const&, BlockSource const&)const;
    void setHurtEntities(bool);
    void _isHeavyBlock(Block const&);
    FallingBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getFallingBlock()const;
    void _waitRemoval();
    void _init();
    void setFallingBlock(Block const&, bool);
    void _breakBlock();
};
