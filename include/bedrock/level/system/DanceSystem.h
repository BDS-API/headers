#pragma once

class DanceSystem : ITickingSystem {

public:
    virtual DanceSystem::~DanceSystem();
    virtual void tick(EntityRegistry &);

    DanceSystem(void);
};
