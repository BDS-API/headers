#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BoostableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BoostableSystem();
    BoostableSystem();
};
