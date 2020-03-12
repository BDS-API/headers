#pragma once

#include "Player.h"
#include "VillagerBase.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "../../unmapped/RenderParams.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorInteraction.h"
#include "damagesource/ActorDamageSource.h"


class VillagerV2 : VillagerBase {

public:
    virtual void remove();
    virtual void buildDebugInfo(std::string &)const;
    virtual void travel(float, float, float);
    ~VillagerV2();
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void die(ActorDamageSource const&);
    virtual void newServerAiStep();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
