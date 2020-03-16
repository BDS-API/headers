#pragma once

#include "ITickingSystem.h"


class SensingSystem : public ITickingSystem {

public:
    virtual ~SensingSystem(); // _ZN13SensingSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN13SensingSystem4tickER14EntityRegistry
    SensingSystem(); // _ZN13SensingSystemC2Ev
};
