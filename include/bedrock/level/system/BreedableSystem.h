#pragma once

#include "ITickingSystem.h"


class BreedableSystem : ITickingSystem {

public:
    ~BreedableSystem();
    virtual void tick(EntityRegistry &);
    BreedableSystem();
};
