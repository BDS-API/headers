#pragma once

class SensingSystem : ITickingSystem {

public:
    virtual ~SensingSystem();
    virtual void tick(EntityRegistry &);

    void SensingSystem(void);
};
