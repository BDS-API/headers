#pragma once

#include "ITickingSystem.h"


class RailActivatorSystem : ITickingSystem {

public:
    ~RailActivatorSystem();
    virtual void tick(EntityRegistry &);
    RailActivatorSystem();
};
