#pragma once

#include "../../../unmapped/EntityRegistry"


class TargetNearbySystem : ITickingSystem {

public:
    virtual TargetNearbySystem::~TargetNearbySystem()
    virtual void tick(EntityRegistry &);

    TargetNearbySystem(void);
};
