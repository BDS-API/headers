#pragma once

#include "WaterAnimal.h"


class TropicalFish : WaterAnimal {

public:
    virtual void normalTick();
    ~TropicalFish();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals();
    virtual void playerTouch(Player &);
    virtual void startRiding(Actor &);
    TropicalFish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
