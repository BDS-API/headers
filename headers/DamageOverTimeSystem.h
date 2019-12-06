#pragma once

class DamageOverTimeSystem : ITickingSystem {

public:
    virtual ~DamageOverTimeSystem();
    virtual void tick(EntityRegistry &);

    void DamageOverTimeSystem(void);
};
