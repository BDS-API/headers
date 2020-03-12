#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreedableSystem : ITickingSystem {

public:
    ~BreedableSystem();
    virtual void tick(EntityRegistry &);
    BreedableSystem();
};
