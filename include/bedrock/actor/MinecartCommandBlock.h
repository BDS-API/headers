#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class MinecartCommandBlock : Minecart {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    MinecartCommandBlock::~MinecartCommandBlock()
    virtual bool canShowNameTag()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();
    virtual void lazyInitDisplayBlock();

    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
