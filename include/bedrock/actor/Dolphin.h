#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class Dolphin : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Dolphin::~Dolphin()
    virtual bool canBePulledIntoVehicle()const;
    virtual void aiStep();
    virtual void createAIGoals();
    virtual void _getWalkTargetValue(BlockPos const&);

    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
