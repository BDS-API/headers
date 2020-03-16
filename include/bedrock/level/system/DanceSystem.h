#pragma once

#include "ITickingSystem.h"


class DanceSystem : public ITickingSystem {

public:
    virtual ~DanceSystem(); // _ZN11DanceSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN11DanceSystem4tickER14EntityRegistry
    DanceSystem(); // _ZN11DanceSystemC2Ev
};
