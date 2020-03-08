#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/BlockPos"


class Dolphin : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    Dolphin::~Dolphin()
    virtual bool canBePulledIntoVehicle()const;
    virtual void aiStep();
    virtual void createAIGoals();
    virtual void _getWalkTargetValue(BlockPos const&);

    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
