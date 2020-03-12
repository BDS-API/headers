#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class JumpControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~JumpControlSystem();
    JumpControlSystem();
};
