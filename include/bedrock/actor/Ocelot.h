#pragma once

#include "../../unmapped/RenderParams"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"


class Ocelot : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Ocelot::~Ocelot();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void doHurtTarget(Actor *);
    virtual void _serverAiMobStep(void);

    Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
