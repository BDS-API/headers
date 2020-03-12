#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class RailActivatorSystem : ITickingSystem {

public:
    ~RailActivatorSystem();
    virtual void tick(EntityRegistry &);
    RailActivatorSystem();
};
