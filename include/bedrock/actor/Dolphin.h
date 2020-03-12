#pragma once

#include "WaterAnimal.h"


class Dolphin : WaterAnimal {

public:
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void createAIGoals();
    ~Dolphin();
    virtual void aiStep();
    virtual bool canBePulledIntoVehicle()const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
