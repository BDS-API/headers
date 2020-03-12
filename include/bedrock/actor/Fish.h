#pragma once

#include "WaterAnimal.h"


class Fish : WaterAnimal {

public:
    virtual void playerTouch(Player &);
    virtual void startRiding(Actor &);
    virtual void normalTick();
    virtual void createAIGoals();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~Fish();
    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
