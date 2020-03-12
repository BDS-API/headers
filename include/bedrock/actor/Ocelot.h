#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Ocelot : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    ~Ocelot();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void doHurtTarget(Actor *);
    virtual void _serverAiMobStep();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
