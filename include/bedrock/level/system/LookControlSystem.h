#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class LookControlSystem : ITickingSystem {

public:
    virtual ~LookControlSystem();
    virtual void tick(EntityRegistry &);

    LookControlSystem();
};
