#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class JumpControlSystem : ITickingSystem {

public:
    virtual ~JumpControlSystem();
    virtual void tick(EntityRegistry &);

    JumpControlSystem();
};
