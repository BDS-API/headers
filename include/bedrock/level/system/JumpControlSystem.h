#pragma once

#include "ITickingSystem.h"


class JumpControlSystem : public ITickingSystem {

public:
    virtual ~JumpControlSystem(); // _ZN17JumpControlSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN17JumpControlSystem4tickER14EntityRegistry
    JumpControlSystem(); // _ZN17JumpControlSystemC2Ev
};
