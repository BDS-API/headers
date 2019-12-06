#pragma once

class Dolphin : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Dolphin();
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void aiStep(void);
    virtual void createAIGoals(void);
    virtual void _getWalkTargetValue(BlockPos const&);

    void Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
