#pragma once

#include "ITickingSystem.h"


class RailActivatorSystem : ITickingSystem {

public:
    ~RailActivatorSystem(); // _ZN19RailActivatorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN19RailActivatorSystem4tickER14EntityRegistry
    RailActivatorSystem(); // _ZN19RailActivatorSystemC2Ev
};
