#pragma once

#include "Actor.h"


class FallingBlock : Actor {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getShadowHeightOffs();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getDeletionDelayTimeSeconds()const;
    ~FallingBlock();
    virtual void normalTick();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void causeFallDamage(float);
    virtual bool isPickable();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getShadowRadius()const;
    void _init();
    void _waitRemoval();
    void _breakBlock();
    void _canDropResource(Block const&, BlockSource const&)const;
    void getFallingBlock()const;
    void _isHeavyBlock(Block const&);
    FallingBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setHurtEntities(bool);
    void setFallingBlock(Block const&, bool);
};
