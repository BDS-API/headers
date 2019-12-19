#pragma once

class Minecart : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Minecart::~Minecart();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void getControllingPlayer(void)const;
    virtual void kill(void);
    virtual bool canMakeStepSound(void)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getDefaultDisplayBlock(void)const;
    virtual void getDefaultDisplayData(void)const;
    virtual void getDefaultDisplayOffset(void)const;
    virtual void applyNaturalSlowdown(void);
    virtual void lazyInitDisplayBlock(void);

    Minecart(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _reloadMinecartHardcodedValues(void);
    void registerLoopingSounds(void);
    void getDisplayBlock(void)const;
    bool hasCustomDisplay(void)const;
    void getDisplayOffset(void)const;
    void setDisplayBlock(Block const&);
    void setCustomDisplay(bool);
    void setDisplayOffset(int);
    void setCustomName(std::string const&);
    bool hasCustomName(void)const;
};
