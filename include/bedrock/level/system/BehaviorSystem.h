#pragma once

#include "ITickingSystem.h"


class BehaviorSystem : ITickingSystem {

public:
    ~BehaviorSystem(); // _ZN14BehaviorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14BehaviorSystem4tickER14EntityRegistry
    BehaviorSystem(); // _ZN14BehaviorSystemC2Ev
};
