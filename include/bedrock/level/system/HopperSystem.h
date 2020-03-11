#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class HopperSystem : ITickingSystem {

public:
    virtual ~HopperSystem();
    virtual void tick(EntityRegistry &);

    HopperSystem();
};
