#pragma once

#include "ITickingSystem.h"


class DanceSystem : ITickingSystem {

public:
    ~DanceSystem(); // _ZN11DanceSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN11DanceSystem4tickER14EntityRegistry
    DanceSystem(); // _ZN11DanceSystemC2Ev
};
