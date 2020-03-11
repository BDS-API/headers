#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class RailMovementSystem : ITickingSystem {

public:
    virtual ~RailMovementSystem();
    virtual void tick(EntityRegistry &);

};
