#pragma once

class DanceSystem : ITickingSystem {

public:
    virtual ~DanceSystem();
    virtual void tick(EntityRegistry &);

    void DanceSystem(void);
};
