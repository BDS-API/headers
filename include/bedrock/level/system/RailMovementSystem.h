#pragma once

#include "ITickingSystem.h"


class RailMovementSystem : ITickingSystem {

public:
    ~RailMovementSystem();
    virtual void tick(EntityRegistry &);
};
