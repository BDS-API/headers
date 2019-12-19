#pragma once

class VillagerV2 : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual VillagerV2::~VillagerV2();
    virtual void remove(void);
    virtual void buildDebugInfo(std::string &)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void travel(float, float, float);
    virtual void newServerAiStep(void);

    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
