#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class TropicalFish : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    TropicalFish::~TropicalFish()
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals();

    TropicalFish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
