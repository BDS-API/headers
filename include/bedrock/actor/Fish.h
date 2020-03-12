#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "WaterAnimal.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Fish : WaterAnimal {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void playerTouch(Player &);
    virtual void startRiding(Actor &);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    ~Fish();
    virtual void createAIGoals();
    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
