#pragma once

#include "ITickingSystem.h"


class HopperSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~HopperSystem();
    HopperSystem();
};
