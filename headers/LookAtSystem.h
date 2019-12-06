#pragma once

class LookAtSystem : ITickingSystem {

public:
    virtual ~LookAtSystem();
    virtual void tick(EntityRegistry &);

    void LookAtSystem(void);
};
