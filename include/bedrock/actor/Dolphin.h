#pragma once

#include "WaterAnimal.h"


class Dolphin : public WaterAnimal {

public:
    virtual void initializeComponents__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN7Dolphin20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Dolphin(); // _ZN7DolphinD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canBePulledIntoVehicle()const; // _ZNK7Dolphin22canBePulledIntoVehicleEv
    virtual void aiStep(); // _ZN7Dolphin6aiStepEv
    virtual void createAIGoals(); // _ZN7Dolphin13createAIGoalsEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN7Dolphin19_getWalkTargetValueERK8BlockPos
    Dolphin(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7DolphinC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
