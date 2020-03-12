#pragma once

#include "ITickingSystem.h"


class DamageOverTimeSystem : ITickingSystem {

public:
    ~DamageOverTimeSystem();
    virtual void tick(EntityRegistry &);
    DamageOverTimeSystem();
};
