#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"


class Dolphin : WaterAnimal {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Dolphin::~Dolphin();
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void aiStep(void);
    virtual void createAIGoals(void);
    virtual void _getWalkTargetValue(BlockPos const&);

    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
