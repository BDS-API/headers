#pragma once

class WaterMovementComponent {

public:
    static long DefaultDragFactor;


    WaterMovementComponent(WaterMovementComponent&&);
    void initFromDefinition(Actor &);
    void getDragFactor(void);
};
