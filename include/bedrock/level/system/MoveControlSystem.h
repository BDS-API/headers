#pragma once

#include "ITickingSystem.h"


class MoveControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~MoveControlSystem();
    MoveControlSystem();
};
