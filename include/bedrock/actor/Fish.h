#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "./WaterAnimal.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "./Player.h"


class Fish : WaterAnimal {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Fish();
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals();

    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
