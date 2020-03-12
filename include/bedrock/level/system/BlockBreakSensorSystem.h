#pragma once

#include "ITickingSystem.h"


class BlockBreakSensorSystem : ITickingSystem {

public:
    ~BlockBreakSensorSystem();
    virtual void tick(EntityRegistry &);
    BlockBreakSensorSystem();
};
