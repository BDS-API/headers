#pragma once

class BreathableSystem : ITickingSystem {

public:
    virtual ~BreathableSystem();
    virtual void tick(EntityRegistry &);

    void BreathableSystem(void);
};
