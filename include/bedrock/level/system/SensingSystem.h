#pragma once

#include "ITickingSystem.h"


class SensingSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~SensingSystem();
    SensingSystem();
};
