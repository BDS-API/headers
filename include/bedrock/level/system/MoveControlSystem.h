#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class MoveControlSystem : ITickingSystem {

public:
    virtual ~MoveControlSystem();
    virtual void tick(EntityRegistry &);

    MoveControlSystem();
};
