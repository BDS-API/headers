#pragma once

#include "ITickingSystem.h"


class RailActivatorSystem : public ITickingSystem {

public:
    virtual ~RailActivatorSystem(); // _ZN19RailActivatorSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN19RailActivatorSystem4tickER14EntityRegistry
    RailActivatorSystem(); // _ZN19RailActivatorSystemC2Ev
};
