#pragma once

#include "../../../unmapped/EntityRegistry"


class RaidBossSystem : ITickingSystem {

public:
    RaidBossSystem::~RaidBossSystem()
    virtual void tick(EntityRegistry &);

    RaidBossSystem(void);
};
