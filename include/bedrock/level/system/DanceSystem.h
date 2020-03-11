#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DanceSystem : ITickingSystem {

public:
    virtual ~DanceSystem();
    virtual void tick(EntityRegistry &);

    DanceSystem();
};
