#pragma once

class InteractSystem : ITickingSystem {

public:
    virtual InteractSystem::~InteractSystem();
    virtual void tick(EntityRegistry &);

    InteractSystem(void);
};
