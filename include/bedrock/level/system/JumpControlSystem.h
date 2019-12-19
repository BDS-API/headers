#pragma once

class JumpControlSystem : ITickingSystem {

public:
    virtual JumpControlSystem::~JumpControlSystem();
    virtual void tick(EntityRegistry &);

    JumpControlSystem(void);
};
