#pragma once

#include "ITickingSystem.h"


class PeekSystem : public ITickingSystem {

public:
    virtual ~PeekSystem(); // _ZN10PeekSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN10PeekSystem4tickER14EntityRegistry
    PeekSystem(); // _ZN10PeekSystemC2Ev
};
