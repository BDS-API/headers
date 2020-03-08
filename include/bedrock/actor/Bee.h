#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class Bee : Animal {

public:
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Bee::~Bee()
    virtual void normalTick();
    virtual void onSynchedDataUpdate(int);
    virtual void getAmbientSoundPostponeTicks();

    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _registerLoopingSounds();
};
