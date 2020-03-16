#pragma once

#include "Actor.h"


class LightningBolt : public Actor {

public:
    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN13LightningBolt15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual void reloadHardcodedClient__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN13LightningBolt21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~LightningBolt(); // _ZN13LightningBoltD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN13LightningBolt10normalTickEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13LightningBolt22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN13LightningBolt21addAdditionalSaveDataER11CompoundTag
    virtual bool shouldAlwaysRender(); // _ZN13LightningBolt18shouldAlwaysRenderEv
    void setCanHurt(bool); // _ZN13LightningBolt10setCanHurtEb
    LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13LightningBoltC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _shouldSetOnFire()const; // _ZNK13LightningBolt16_shouldSetOnFireEv
};
