#pragma once

#include "../../unmapped/RenderParams.h"
#include <string>
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorInteraction.h"
#include "./Player.h"
#include "./VillagerBase.h"


class VillagerV2 : VillagerBase {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~VillagerV2();
    virtual void remove();
    virtual void buildDebugInfo(std::string &)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void travel(float, float, float);
    virtual void newServerAiStep();

    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
