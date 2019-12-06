#pragma once

class FallingBlock : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~FallingBlock();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual void causeFallDamage(float);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void FallingBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init(void);
    void _waitRemoval(void);
    void getFallingBlock(void)const;
    void _isHeavyBlock(Block const&);
    void _breakBlock(void);
    void setFallingBlock(Block const&, bool);
    void _canDropResource(Block const&, BlockSource const&)const;
    void setHurtEntities(bool);
};
