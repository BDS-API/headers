#pragma once

#include "Animal.h"


class Ocelot : public Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN6Ocelot15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Ocelot(); // _ZN6OcelotD2Ev
    virtual void __fake_function0(); // fake
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN6Ocelot35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void doHurtTarget(Actor *); // _ZN6Ocelot12doHurtTargetEP5Actor
    virtual void _serverAiMobStep(); // _ZN6Ocelot16_serverAiMobStepEv
    Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6OcelotC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
