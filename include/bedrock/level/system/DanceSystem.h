#pragma once

#include "ITickingSystem.h"


class DanceSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~DanceSystem();
    DanceSystem();
};
