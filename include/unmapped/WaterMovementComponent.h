#pragma once

#include "../bedrock/actor/Actor.h"


class WaterMovementComponent {

public:
    static long DefaultDragFactor;

    void initFromDefinition(Actor &);
    void getDragFactor();
    WaterMovementComponent(WaterMovementComponent &&);
};
