#pragma once

class RaidBossSystem : ITickingSystem {

public:
    virtual ~RaidBossSystem();
    virtual void tick(EntityRegistry &);

    void RaidBossSystem(void);
};
