#pragma once

#include "../util/Vec2.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include <string>
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Minecart : Actor {

public:
    virtual void lazyInitDisplayBlock();
    virtual void getShadowHeightOffs();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getShadowRadius()const;
    virtual void getDefaultDisplayOffset()const;
    ~Minecart();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void normalTick();
    virtual bool canMakeStepSound()const;
    virtual void getControllingPlayer()const;
    virtual void destroy(ActorDamageSource const&, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void applyNaturalSlowdown();
    virtual bool isPickable();
    virtual void _onSizeUpdated();
    virtual void kill();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getDefaultDisplayData()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getDefaultDisplayBlock()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    bool hasCustomName()const;
    void setCustomName(std::string const&);
    Minecart(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDisplayBlock(Block const&);
    void getDisplayBlock()const;
    void setCustomDisplay(bool);
    void setDisplayOffset(int);
    std::string getCustomName()const;
    void registerLoopingSounds();
    void getDisplayOffset()const;
    bool hasCustomDisplay()const;
    std::string getAName();
    void _reloadMinecartHardcodedValues();
};
