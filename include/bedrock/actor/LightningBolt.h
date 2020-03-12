#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class LightningBolt : Actor {

public:
    ~LightningBolt();
    virtual void shouldAlwaysRender();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    void _shouldSetOnFire()const;
    LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setCanHurt(bool);
};
