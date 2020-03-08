#pragma once

#include "../../../unmapped/EntityRegistry"


class TargetNearbySystem : ITickingSystem {

public:
    TargetNearbySystem::~TargetNearbySystem()
    virtual void tick(EntityRegistry &);

    TargetNearbySystem(void);
};
