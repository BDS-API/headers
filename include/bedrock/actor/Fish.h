#pragma once

#include "WaterAnimal.h"


class Fish : public WaterAnimal {

public:
    virtual void initializeComponents__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN4Fish20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Fish(); // _ZN4FishD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN4Fish10normalTickEv
    virtual void startRiding(Actor &); // _ZN4Fish11startRidingER5Actor
    virtual void playerTouch(Player &); // _ZN4Fish11playerTouchER6Player
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN4Fish35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void createAIGoals(); // _ZN4Fish13createAIGoalsEv
    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN4FishC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
