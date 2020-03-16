#pragma once

#include "ITickingSystem.h"


class RailMovementSystem : public ITickingSystem {

public:
    virtual ~RailMovementSystem(); // _ZN18RailMovementSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN18RailMovementSystem4tickER14EntityRegistry
};
