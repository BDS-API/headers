#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class MinecartCommandBlock : Minecart {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual MinecartCommandBlock::~MinecartCommandBlock()
    virtual bool canShowNameTag()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();
    virtual void lazyInitDisplayBlock();

    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
