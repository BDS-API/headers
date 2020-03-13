#pragma once

#include "ITickingSystem.h"


class LookAtSystem : ITickingSystem {

public:
    ~LookAtSystem(); // _ZN12LookAtSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN12LookAtSystem4tickER14EntityRegistry
    LookAtSystem(); // _ZN12LookAtSystemC2Ev
};
