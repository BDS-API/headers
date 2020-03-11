#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BlockBreakSensorSystem : ITickingSystem {

public:
    virtual ~BlockBreakSensorSystem();
    virtual void tick(EntityRegistry &);

    BlockBreakSensorSystem();
};
