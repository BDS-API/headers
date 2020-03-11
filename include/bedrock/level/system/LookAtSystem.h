#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class LookAtSystem : ITickingSystem {

public:
    virtual ~LookAtSystem();
    virtual void tick(EntityRegistry &);

    LookAtSystem();
};
