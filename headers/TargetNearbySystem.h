#pragma once

class TargetNearbySystem : ITickingSystem {

public:
    virtual ~TargetNearbySystem();
    virtual void tick(EntityRegistry &);

    void TargetNearbySystem(void);
};
