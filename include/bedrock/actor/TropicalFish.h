#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "WaterAnimal.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class TropicalFish : WaterAnimal {

public:
    virtual void normalTick();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    ~TropicalFish();
    TropicalFish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
