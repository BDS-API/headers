#pragma once

#include "WaterAnimal.h"


class TropicalFish : WaterAnimal {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12TropicalFish20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~TropicalFish(); // _ZN12TropicalFishD2Ev
    virtual void normalTick(); // _ZN12TropicalFish10normalTickEv
    virtual void startRiding(Actor &); // _ZN12TropicalFish11startRidingER5Actor
    virtual void playerTouch(Player &); // _ZN12TropicalFish11playerTouchER6Player
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN12TropicalFish35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void createAIGoals(); // _ZN12TropicalFish13createAIGoalsEv
    TropicalFish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12TropicalFishC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
