#pragma once

#include "../../../unmapped/EntityRegistry"


class BreakBlocksSystem : ITickingSystem {

public:
    virtual BreakBlocksSystem::~BreakBlocksSystem()
    virtual void tick(EntityRegistry &);

    BreakBlocksSystem(void);
};
