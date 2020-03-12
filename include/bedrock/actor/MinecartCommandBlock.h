#pragma once

#include "Minecart.h"


class MinecartCommandBlock : Minecart {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool canShowNameTag()const;
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void lazyInitDisplayBlock();
    virtual void addAdditionalSaveData(CompoundTag &);
    ~MinecartCommandBlock();
    virtual void applyNaturalSlowdown();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
