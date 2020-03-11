#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class FlockingSystem : ITickingSystem {

public:
    virtual ~FlockingSystem();
    virtual void tick(EntityRegistry &);

    FlockingSystem();
};
