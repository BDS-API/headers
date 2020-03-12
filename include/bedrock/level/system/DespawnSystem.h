#pragma once

#include "ITickingSystem.h"


class DespawnSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~DespawnSystem();
    DespawnSystem();
};
