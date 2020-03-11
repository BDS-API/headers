#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DespawnSystem : ITickingSystem {

public:
    virtual ~DespawnSystem();
    virtual void tick(EntityRegistry &);

    DespawnSystem();
};
