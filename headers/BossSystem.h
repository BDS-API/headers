#pragma once

class BossSystem : ITickingSystem {

public:
    virtual ~BossSystem();
    virtual void tick(EntityRegistry &);

    void BossSystem(void);
};
