#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TargetNearbySystem : ITickingSystem {

public:
    ~TargetNearbySystem();
    virtual void tick(EntityRegistry &);
    TargetNearbySystem();
};
