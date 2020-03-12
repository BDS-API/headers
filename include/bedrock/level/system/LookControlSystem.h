#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class LookControlSystem : ITickingSystem {

public:
    ~LookControlSystem();
    virtual void tick(EntityRegistry &);
    LookControlSystem();
};
