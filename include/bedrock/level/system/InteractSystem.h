#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class InteractSystem : ITickingSystem {

public:
    ~InteractSystem();
    virtual void tick(EntityRegistry &);
    InteractSystem();
};
