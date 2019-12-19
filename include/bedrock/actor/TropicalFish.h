#pragma once

class TropicalFish : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual TropicalFish::~TropicalFish();
    virtual void normalTick(void);
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals(void);

    TropicalFish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
