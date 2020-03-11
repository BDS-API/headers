#pragma once

#include <string>
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class Minecart : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Minecart();
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
    std::string getAName();
    bool hasCustomName()const;
    std::string getCustomName()const;
};
