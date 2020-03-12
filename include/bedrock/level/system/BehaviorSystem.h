#pragma once

#include "ITickingSystem.h"


class BehaviorSystem : ITickingSystem {

public:
    ~BehaviorSystem();
    virtual void tick(EntityRegistry &);
    BehaviorSystem();
};
