#pragma once

class PeekSystem : ITickingSystem {

public:
    virtual ~PeekSystem();
    virtual void tick(EntityRegistry &);

    void PeekSystem(void);
};
