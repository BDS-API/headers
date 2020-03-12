#pragma once

#include "ITickingSystem.h"


class CommandBlockSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~CommandBlockSystem();
    CommandBlockSystem();
};
