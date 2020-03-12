#pragma once

#include "ITickingSystem.h"


class TargetNearbySystem : ITickingSystem {

public:
    ~TargetNearbySystem();
    virtual void tick(EntityRegistry &);
    TargetNearbySystem();
};
