#pragma once



class WaterMovementComponent {

public:
    static long DefaultDragFactor;

    void initFromDefinition(Actor &);
    WaterMovementComponent(WaterMovementComponent &&);
    void getDragFactor();
};
