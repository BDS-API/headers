#pragma once

class Ocelot : Animal {

public:
    static long Ocelot::SNEAK_SPEED_MOD;
    static long Ocelot::SPRINT_SPEED_MOD;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Ocelot();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void doHurtTarget(Actor *);
    virtual void _serverAiMobStep(void);

    void Ocelot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
