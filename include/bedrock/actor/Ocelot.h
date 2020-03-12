#pragma once

#include "Animal.h"


class Ocelot : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    ~Ocelot();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _serverAiMobStep();
    virtual void doHurtTarget(Actor *);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
