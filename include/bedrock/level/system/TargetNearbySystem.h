#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TargetNearbySystem : ITickingSystem {

public:
    virtual ~TargetNearbySystem();
    virtual void tick(EntityRegistry &);

    TargetNearbySystem();
};
