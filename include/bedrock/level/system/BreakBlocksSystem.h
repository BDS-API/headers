#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreakBlocksSystem : ITickingSystem {

public:
    ~BreakBlocksSystem();
    virtual void tick(EntityRegistry &);
    BreakBlocksSystem();
};
