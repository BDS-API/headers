#pragma once

#include "ITickingSystem.h"


class InteractSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~InteractSystem();
    InteractSystem();
};
