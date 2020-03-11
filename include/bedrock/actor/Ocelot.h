#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"


class Ocelot : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Ocelot();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void doHurtTarget(Actor *);
    virtual void _serverAiMobStep();

    Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
