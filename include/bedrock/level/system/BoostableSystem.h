#pragma once

#include "ITickingSystem.h"


class BoostableSystem : public ITickingSystem {

public:
    virtual ~BoostableSystem(); // _ZN15BoostableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN15BoostableSystem4tickER14EntityRegistry
    BoostableSystem(); // _ZN15BoostableSystemC2Ev
};
