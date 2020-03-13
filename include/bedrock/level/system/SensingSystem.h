#pragma once

#include "ITickingSystem.h"


class SensingSystem : ITickingSystem {

public:
    ~SensingSystem(); // _ZN13SensingSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13SensingSystem4tickER14EntityRegistry
    SensingSystem(); // _ZN13SensingSystemC2Ev
};
