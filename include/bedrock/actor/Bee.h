#pragma once

#include "Animal.h"


class Bee : public Animal {

public:
    virtual void reloadHardcodedClient__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Bee21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Bee(); // _ZN3BeeD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN3Bee10normalTickEv
    virtual void onSynchedDataUpdate(int); // _ZN3Bee19onSynchedDataUpdateEi
    virtual void getAmbientSoundPostponeTicks(); // _ZN3Bee28getAmbientSoundPostponeTicksEv
    Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3BeeC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _registerLoopingSounds(); // _ZN3Bee22_registerLoopingSoundsEv
};
