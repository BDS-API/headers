#pragma once

class FlockingSystem : ITickingSystem {

public:
    virtual ~FlockingSystem();
    virtual void tick(EntityRegistry &);

    void FlockingSystem(void);
};
