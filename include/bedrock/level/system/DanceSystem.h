#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DanceSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~DanceSystem();
    DanceSystem();
};
