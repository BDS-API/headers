#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"


class LightningBolt : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual LightningBolt::~LightningBolt();
    virtual void normalTick(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shouldAlwaysRender(void);

    void setCanHurt(bool);
    LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _shouldSetOnFire(void)const;
};
