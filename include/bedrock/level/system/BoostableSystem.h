#pragma once

#include "../../../unmapped/EntityRegistry"


class BoostableSystem : ITickingSystem {

public:
    virtual BoostableSystem::~BoostableSystem()
    virtual void tick(EntityRegistry &);

    BoostableSystem(void);
};
