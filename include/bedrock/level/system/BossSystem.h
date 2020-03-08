#pragma once

#include "../../../unmapped/EntityRegistry"


class BossSystem : ITickingSystem {

public:
    BossSystem::~BossSystem()
    virtual void tick(EntityRegistry &);

    BossSystem(void);
};
