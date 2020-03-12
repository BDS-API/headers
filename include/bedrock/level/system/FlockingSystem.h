#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class FlockingSystem : ITickingSystem {

public:
    ~FlockingSystem();
    virtual void tick(EntityRegistry &);
    FlockingSystem();
};
