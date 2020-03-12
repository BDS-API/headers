#pragma once

#include "Actor.h"


class LightningBolt : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~LightningBolt();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shouldAlwaysRender();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void normalTick();
    void setCanHurt(bool);
    void _shouldSetOnFire()const;
    LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
