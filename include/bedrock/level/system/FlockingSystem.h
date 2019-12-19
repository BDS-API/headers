#pragma once

class FlockingSystem : ITickingSystem {

public:
    virtual FlockingSystem::~FlockingSystem();
    virtual void tick(EntityRegistry &);

    FlockingSystem(void);
};
