#pragma once

#include "ITickingSystem.h"


class RaidBossSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~RaidBossSystem();
    RaidBossSystem();
};
