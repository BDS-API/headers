#pragma once

class TargetNearbySystem : ITickingSystem {

public:
    virtual TargetNearbySystem::~TargetNearbySystem();
    virtual void tick(EntityRegistry &);

    TargetNearbySystem(void);
};
