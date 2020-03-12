#pragma once

#include "ITickingSystem.h"


class BreakBlocksSystem : ITickingSystem {

public:
    ~BreakBlocksSystem();
    virtual void tick(EntityRegistry &);
    BreakBlocksSystem();
};
