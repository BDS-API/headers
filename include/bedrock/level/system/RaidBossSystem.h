#pragma once

#include "../../../unmapped/EntityRegistry"


class RaidBossSystem : ITickingSystem {

public:
    virtual RaidBossSystem::~RaidBossSystem()
    virtual void tick(EntityRegistry &);

    RaidBossSystem(void);
};
