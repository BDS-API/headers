#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class Fish : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    Fish::~Fish()
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals();

    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
