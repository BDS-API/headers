#pragma once

#include "ITickingSystem.h"


class LookControlSystem : ITickingSystem {

public:
    ~LookControlSystem(); // _ZN17LookControlSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17LookControlSystem4tickER14EntityRegistry
    LookControlSystem(); // _ZN17LookControlSystemC2Ev
};
