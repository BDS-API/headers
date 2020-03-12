#pragma once

#include "Actor.h"
#include <string>


class Minecart : Actor {

public:
    virtual void lazyInitDisplayBlock();
    virtual void kill();
    ~Minecart();
    virtual bool canMakeStepSound()const;
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual bool isPickable();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void applyNaturalSlowdown();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getShadowHeightOffs();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getDefaultDisplayBlock()const;
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getShadowRadius()const;
    virtual void getControllingPlayer()const;
    virtual void _onSizeUpdated();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getDefaultDisplayOffset()const;
    virtual void normalTick();
    virtual void getDefaultDisplayData()const;
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    bool hasCustomDisplay()const;
    std::string getCustomName()const;
    void registerLoopingSounds();
    void setCustomDisplay(bool);
    void setCustomName(std::string const&);
    std::string getAName();
    void _reloadMinecartHardcodedValues();
    void setDisplayBlock(Block const&);
    void getDisplayBlock()const;
    void setDisplayOffset(int);
    void getDisplayOffset()const;
    Minecart(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool hasCustomName()const;
};
