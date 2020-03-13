#pragma once

#include "Minecart.h"


class MinecartCommandBlock : Minecart {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN20MinecartCommandBlock20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~MinecartCommandBlock(); // _ZN20MinecartCommandBlockD2Ev
    virtual bool canShowNameTag()const; // _ZNK20MinecartCommandBlock14canShowNameTagEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN20MinecartCommandBlock22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN20MinecartCommandBlock21addAdditionalSaveDataER11CompoundTag
    virtual void getType(); // _ZN20MinecartCommandBlock7getTypeEv
    virtual void getDefaultDisplayBlock()const; // _ZNK20MinecartCommandBlock22getDefaultDisplayBlockEv
    virtual void applyNaturalSlowdown(); // _ZN20MinecartCommandBlock20applyNaturalSlowdownEv
    virtual void lazyInitDisplayBlock(); // _ZN20MinecartCommandBlock20lazyInitDisplayBlockEv
    MinecartCommandBlock(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN20MinecartCommandBlockC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
