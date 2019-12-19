#pragma once

class DamageOverTimeSystem : ITickingSystem {

public:
    virtual DamageOverTimeSystem::~DamageOverTimeSystem();
    virtual void tick(EntityRegistry &);

    DamageOverTimeSystem(void);
};
