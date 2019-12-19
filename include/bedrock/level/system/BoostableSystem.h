#pragma once

class BoostableSystem : ITickingSystem {

public:
    virtual BoostableSystem::~BoostableSystem();
    virtual void tick(EntityRegistry &);

    BoostableSystem(void);
};
