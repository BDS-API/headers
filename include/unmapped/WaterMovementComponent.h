#pragma once

#include "../bedrock/actor/Actor.h"
#include "./WaterMovementComponent.h"


class WaterMovementComponent {

public:
    static long DefaultDragFactor;


    WaterMovementComponent(WaterMovementComponent &&);
    void initFromDefinition(Actor &);
    void getDragFactor();
};
