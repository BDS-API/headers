#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class RailActivatorSystem : ITickingSystem {

public:
    virtual ~RailActivatorSystem();
    virtual void tick(EntityRegistry &);

    RailActivatorSystem();
};
