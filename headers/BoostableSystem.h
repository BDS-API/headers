#pragma once

class BoostableSystem : ITickingSystem {

public:
    virtual ~BoostableSystem();
    virtual void tick(EntityRegistry &);

    void BoostableSystem(void);
};
