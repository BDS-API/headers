#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"


class MinecartCommandBlock : Minecart {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual MinecartCommandBlock::~MinecartCommandBlock();
    virtual bool canShowNameTag(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getType(void);
    virtual void getDefaultDisplayBlock(void)const;
    virtual void applyNaturalSlowdown(void);
    virtual void lazyInitDisplayBlock(void);

    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
