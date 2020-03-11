#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class PeekSystem : ITickingSystem {

public:
    virtual ~PeekSystem();
    virtual void tick(EntityRegistry &);

    PeekSystem();
};
