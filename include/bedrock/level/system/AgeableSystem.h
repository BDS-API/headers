#pragma once

#include "ITickingSystem.h"


class AgeableSystem : ITickingSystem {

public:
    ~AgeableSystem();
    virtual void tick(EntityRegistry &);
    AgeableSystem();
};
