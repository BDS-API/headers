#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/BlockPos.h"
#include "../../unmapped/VariantParameterList.h"
#include "./WaterAnimal.h"
#include "unmapped/ActorDefinitionGroup.h"


class Dolphin : WaterAnimal {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Dolphin();
    virtual bool canBePulledIntoVehicle()const;
    virtual void aiStep();
    virtual void createAIGoals();
    virtual void _getWalkTargetValue(BlockPos const&);

    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
