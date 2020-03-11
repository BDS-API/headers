#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreakBlocksSystem : ITickingSystem {

public:
    virtual ~BreakBlocksSystem();
    virtual void tick(EntityRegistry &);

    BreakBlocksSystem();
};
