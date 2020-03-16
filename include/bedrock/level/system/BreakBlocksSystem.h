#pragma once

#include "ITickingSystem.h"


class BreakBlocksSystem : public ITickingSystem {

public:
    virtual ~BreakBlocksSystem(); // _ZN17BreakBlocksSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN17BreakBlocksSystem4tickER14EntityRegistry
    BreakBlocksSystem(); // _ZN17BreakBlocksSystemC2Ev
};
