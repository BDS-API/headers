#pragma once

#include "ITickingSystem.h"


class LookControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~LookControlSystem();
    LookControlSystem();
};
