#pragma once

#include "../../../unmapped/EntityRegistry"


class BossSystem : ITickingSystem {

public:
    virtual BossSystem::~BossSystem()
    virtual void tick(EntityRegistry &);

    BossSystem(void);
};
