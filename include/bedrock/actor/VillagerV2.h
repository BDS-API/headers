#pragma once

#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorInteraction"
#include "unmapped/ActorDefinitionIdentifier"


class VillagerV2 : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual VillagerV2::~VillagerV2()
    virtual void remove();
    virtual void buildDebugInfo(std::string &)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void travel(float, float, float);
    virtual void newServerAiStep();

    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
