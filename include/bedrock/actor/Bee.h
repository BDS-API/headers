#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"


class Bee : Animal {

public:
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Bee::~Bee();
    virtual void normalTick(void);
    virtual void onSynchedDataUpdate(int);
    virtual void getAmbientSoundPostponeTicks(void);

    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _registerLoopingSounds(void);
};
