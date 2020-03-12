#pragma once

#include "ITickingSystem.h"


class JumpControlSystem : ITickingSystem {

public:
    ~JumpControlSystem();
    virtual void tick(EntityRegistry &);
    JumpControlSystem();
};
