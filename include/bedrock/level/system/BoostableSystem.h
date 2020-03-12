#pragma once

#include "ITickingSystem.h"


class BoostableSystem : ITickingSystem {

public:
    ~BoostableSystem();
    virtual void tick(EntityRegistry &);
    BoostableSystem();
};
