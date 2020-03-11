#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"


class Bee : Animal {

public:
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Bee();
    virtual void normalTick();
    virtual void onSynchedDataUpdate(int);
    virtual void getAmbientSoundPostponeTicks();

    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _registerLoopingSounds();
};
