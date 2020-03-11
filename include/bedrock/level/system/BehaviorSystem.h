#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BehaviorSystem : ITickingSystem {

public:
    virtual ~BehaviorSystem();
    virtual void tick(EntityRegistry &);

    BehaviorSystem();
};
