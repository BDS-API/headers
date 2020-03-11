#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DamageOverTimeSystem : ITickingSystem {

public:
    virtual ~DamageOverTimeSystem();
    virtual void tick(EntityRegistry &);

    DamageOverTimeSystem();
};
