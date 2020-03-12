#pragma once

#include "ITickingSystem.h"


class FlockingSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~FlockingSystem();
    FlockingSystem();
};
