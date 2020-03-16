#pragma once

#include "ITickingSystem.h"


class HopperSystem : public ITickingSystem {

public:
    virtual ~HopperSystem(); // _ZN12HopperSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN12HopperSystem4tickER14EntityRegistry
    HopperSystem(); // _ZN12HopperSystemC2Ev
};
