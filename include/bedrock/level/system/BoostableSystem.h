#pragma once

#include "../../../unmapped/EntityRegistry"


class BoostableSystem : ITickingSystem {

public:
    BoostableSystem::~BoostableSystem()
    virtual void tick(EntityRegistry &);

    BoostableSystem(void);
};
