#pragma once

#include "ITickingSystem.h"


class PeekSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~PeekSystem();
    PeekSystem();
};
