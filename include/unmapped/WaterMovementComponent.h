#pragma once



class WaterMovementComponent {

public:
    static long DefaultDragFactor;

    WaterMovementComponent(WaterMovementComponent &&); // _ZN22WaterMovementComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN22WaterMovementComponent18initFromDefinitionER5Actor
    void getDragFactor(); // _ZN22WaterMovementComponent13getDragFactorEv
};
