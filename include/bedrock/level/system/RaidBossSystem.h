#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class RaidBossSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~RaidBossSystem();
    RaidBossSystem();
};
