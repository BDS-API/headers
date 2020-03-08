#pragma once

#include "../../../unmapped/EntityRegistry"


class BreakBlocksSystem : ITickingSystem {

public:
    BreakBlocksSystem::~BreakBlocksSystem()
    virtual void tick(EntityRegistry &);

    BreakBlocksSystem(void);
};
