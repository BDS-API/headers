#pragma once

#include "ITickingSystem.h"


class BlockBreakSensorSystem : public ITickingSystem {

public:
    virtual ~BlockBreakSensorSystem(); // _ZN22BlockBreakSensorSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN22BlockBreakSensorSystem4tickER14EntityRegistry
    BlockBreakSensorSystem(); // _ZN22BlockBreakSensorSystemC2Ev
};
