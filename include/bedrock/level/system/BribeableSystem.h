#pragma once

class BribeableSystem : ITickingSystem {

public:
    virtual BribeableSystem::~BribeableSystem();
    virtual void tick(EntityRegistry &);

    BribeableSystem(void);
};
