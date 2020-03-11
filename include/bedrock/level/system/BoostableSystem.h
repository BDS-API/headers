#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BoostableSystem : ITickingSystem {

public:
    virtual ~BoostableSystem();
    virtual void tick(EntityRegistry &);

    BoostableSystem();
};
