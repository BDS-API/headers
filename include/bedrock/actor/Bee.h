#pragma once

#include "Animal.h"


class Bee : Animal {

public:
    virtual void onSynchedDataUpdate(int);
    virtual void normalTick();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~Bee();
    virtual void getAmbientSoundPostponeTicks();
    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _registerLoopingSounds();
};
