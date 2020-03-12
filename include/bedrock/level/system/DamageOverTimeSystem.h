#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DamageOverTimeSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~DamageOverTimeSystem();
    DamageOverTimeSystem();
};
