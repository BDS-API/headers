#pragma once

class LookControlSystem : ITickingSystem {

public:
    virtual LookControlSystem::~LookControlSystem();
    virtual void tick(EntityRegistry &);

    LookControlSystem(void);
};