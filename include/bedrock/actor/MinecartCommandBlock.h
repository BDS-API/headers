#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Minecart.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class MinecartCommandBlock : Minecart {

public:
    virtual void getDefaultDisplayBlock()const;
    ~MinecartCommandBlock();
    virtual void lazyInitDisplayBlock();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void applyNaturalSlowdown();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getType();
    virtual bool canShowNameTag()const;
    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
