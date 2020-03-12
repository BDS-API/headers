#pragma once

#include "ITickingSystem.h"


class AngrySystem : ITickingSystem {

public:
    ~AngrySystem();
    virtual void tick(EntityRegistry &);
    AngrySystem();
};
