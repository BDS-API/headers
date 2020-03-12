#pragma once

#include "ITickingSystem.h"


class BodyControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BodyControlSystem();
    BodyControlSystem();
};
