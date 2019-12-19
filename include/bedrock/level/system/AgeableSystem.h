#pragma once

class AgeableSystem : ITickingSystem {

public:
    virtual AgeableSystem::~AgeableSystem();
    virtual void tick(EntityRegistry &);

    AgeableSystem(void);
};
