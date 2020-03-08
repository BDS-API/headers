#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/Vec2"
#include "../../unmapped/DataLoadHelper"


class Minecart : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Minecart::~Minecart()
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void getControllingPlayer()const;
    virtual void kill();
    virtual bool canMakeStepSound()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getDefaultDisplayBlock()const;
    virtual void getDefaultDisplayData()const;
    virtual void getDefaultDisplayOffset()const;
    virtual void applyNaturalSlowdown();
    virtual void lazyInitDisplayBlock();

    Minecart(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _reloadMinecartHardcodedValues();
    void registerLoopingSounds();
    void getDisplayBlock()const;
    bool hasCustomDisplay()const;
    void getDisplayOffset()const;
    void setDisplayBlock(Block const&);
    void setCustomDisplay(bool);
    void setDisplayOffset(int);
    void setCustomName(std::string const&);
    bool hasCustomName()const;
};
