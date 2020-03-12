#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "WaterAnimal.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Dolphin : WaterAnimal {

public:
    virtual void aiStep();
    virtual void createAIGoals();
    ~Dolphin();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool canBePulledIntoVehicle()const;
    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
