#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class LightningBolt : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    LightningBolt::~LightningBolt()
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shouldAlwaysRender();

    void setCanHurt(bool);
    LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _shouldSetOnFire()const;
};
