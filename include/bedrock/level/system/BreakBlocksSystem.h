#pragma once

#include "ITickingSystem.h"


class BreakBlocksSystem : ITickingSystem {

public:
    ~BreakBlocksSystem(); // _ZN17BreakBlocksSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17BreakBlocksSystem4tickER14EntityRegistry
    BreakBlocksSystem(); // _ZN17BreakBlocksSystemC2Ev
};
