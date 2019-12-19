#pragma once

class Fish : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Fish::~Fish();
    virtual void normalTick(void);
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void createAIGoals(void);

    Fish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
