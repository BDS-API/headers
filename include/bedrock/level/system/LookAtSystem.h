#pragma once

#include "ITickingSystem.h"


class LookAtSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~LookAtSystem();
    LookAtSystem();
};
