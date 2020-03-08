#pragma once

#include "../bedrock/actor/Actor"


class WaterMovementComponent {

public:
    static long DefaultDragFactor;


    WaterMovementComponent(WaterMovementComponent&&);
    void initFromDefinition(Actor &);
    void getDragFactor();
};
