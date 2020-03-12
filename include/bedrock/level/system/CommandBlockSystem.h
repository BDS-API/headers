#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class CommandBlockSystem : ITickingSystem {

public:
    ~CommandBlockSystem();
    virtual void tick(EntityRegistry &);
    CommandBlockSystem();
};
