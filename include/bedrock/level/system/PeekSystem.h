#pragma once

#include "ITickingSystem.h"


class PeekSystem : ITickingSystem {

public:
    ~PeekSystem(); // _ZN10PeekSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN10PeekSystem4tickER14EntityRegistry
    PeekSystem(); // _ZN10PeekSystemC2Ev
};
