#pragma once

class BreathableSystem : ITickingSystem {

public:
    virtual BreathableSystem::~BreathableSystem();
    virtual void tick(EntityRegistry &);

    BreathableSystem(void);
};
