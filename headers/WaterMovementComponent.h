#pragma once

class WaterMovementComponent {

public:
    static long WaterMovementComponent::DefaultDragFactor;


    void WaterMovementComponent(WaterMovementComponent&&);
    void initFromDefinition(Actor &);
    void getDragFactor(void);
};
