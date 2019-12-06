#pragma once

class JumpControlSystem : ITickingSystem {

public:
    virtual ~JumpControlSystem();
    virtual void tick(EntityRegistry &);

    void JumpControlSystem(void);
};
