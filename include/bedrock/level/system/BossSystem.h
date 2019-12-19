#pragma once

class BossSystem : ITickingSystem {

public:
    virtual BossSystem::~BossSystem();
    virtual void tick(EntityRegistry &);

    BossSystem(void);
};
