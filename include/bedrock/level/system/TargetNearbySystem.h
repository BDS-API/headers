#pragma once

#include "ITickingSystem.h"


class TargetNearbySystem : ITickingSystem {

public:
    ~TargetNearbySystem(); // _ZN18TargetNearbySystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18TargetNearbySystem4tickER14EntityRegistry
    TargetNearbySystem(); // _ZN18TargetNearbySystemC2Ev
};
