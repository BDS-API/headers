#pragma once

#include "ITickingSystem.h"


class BribeableSystem : ITickingSystem {

public:
    ~BribeableSystem(); // _ZN15BribeableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15BribeableSystem4tickER14EntityRegistry
    BribeableSystem(); // _ZN15BribeableSystemC2Ev
};
