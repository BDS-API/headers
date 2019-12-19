#pragma once

class WaterMovementComponent {

public:
    static long DefaultDragFactor;


    void WaterMovementComponent(WaterMovementComponent&&);
    void initFromDefinition(Actor &);
    void getDragFactor(void);
};
