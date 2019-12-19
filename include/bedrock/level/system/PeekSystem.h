#pragma once

class PeekSystem : ITickingSystem {

public:
    virtual PeekSystem::~PeekSystem();
    virtual void tick(EntityRegistry &);

    PeekSystem(void);
};
