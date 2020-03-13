#pragma once

#include "ITickingSystem.h"


class JumpControlSystem : ITickingSystem {

public:
    ~JumpControlSystem(); // _ZN17JumpControlSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17JumpControlSystem4tickER14EntityRegistry
    JumpControlSystem(); // _ZN17JumpControlSystemC2Ev
};
