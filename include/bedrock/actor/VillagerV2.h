#pragma once

#include <string>
#include "VillagerBase.h"


class VillagerV2 : VillagerBase {

public:
    virtual void travel(float, float, float);
    virtual void newServerAiStep();
    virtual void buildDebugInfo(std::string &)const;
    virtual void die(ActorDamageSource const&);
    ~VillagerV2();
    virtual void remove();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
