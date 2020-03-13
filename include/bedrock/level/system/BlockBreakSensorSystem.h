#pragma once

#include "ITickingSystem.h"


class BlockBreakSensorSystem : ITickingSystem {

public:
    ~BlockBreakSensorSystem(); // _ZN22BlockBreakSensorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN22BlockBreakSensorSystem4tickER14EntityRegistry
    BlockBreakSensorSystem(); // _ZN22BlockBreakSensorSystemC2Ev
};
