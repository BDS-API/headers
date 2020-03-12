#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class HopperSystem : ITickingSystem {

public:
    ~HopperSystem();
    virtual void tick(EntityRegistry &);
    HopperSystem();
};
