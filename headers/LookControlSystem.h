#pragma once

class LookControlSystem : ITickingSystem {

public:
    virtual ~LookControlSystem();
    virtual void tick(EntityRegistry &);

    void LookControlSystem(void);
};
