#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class InteractSystem : ITickingSystem {

public:
    virtual ~InteractSystem();
    virtual void tick(EntityRegistry &);

    InteractSystem();
};
