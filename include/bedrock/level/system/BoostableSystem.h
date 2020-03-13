#pragma once

#include "ITickingSystem.h"


class BoostableSystem : ITickingSystem {

public:
    ~BoostableSystem(); // _ZN15BoostableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15BoostableSystem4tickER14EntityRegistry
    BoostableSystem(); // _ZN15BoostableSystemC2Ev
};
