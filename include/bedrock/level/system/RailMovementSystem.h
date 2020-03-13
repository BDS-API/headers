#pragma once

#include "ITickingSystem.h"


class RailMovementSystem : ITickingSystem {

public:
    ~RailMovementSystem(); // _ZN18RailMovementSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18RailMovementSystem4tickER14EntityRegistry
};
