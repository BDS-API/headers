#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class MoveControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~MoveControlSystem();
    MoveControlSystem();
};
