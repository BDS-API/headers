#pragma once

#include "ITickingSystem.h"


class TargetNearbySystem : public ITickingSystem {

public:
    virtual ~TargetNearbySystem(); // _ZN18TargetNearbySystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN18TargetNearbySystem4tickER14EntityRegistry
    TargetNearbySystem(); // _ZN18TargetNearbySystemC2Ev
};
