#pragma once

#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"


class Bee : Animal {

public:
    virtual void normalTick();
    ~Bee();
    virtual void getAmbientSoundPostponeTicks();
    virtual void onSynchedDataUpdate(int);
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    void _registerLoopingSounds();
    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
