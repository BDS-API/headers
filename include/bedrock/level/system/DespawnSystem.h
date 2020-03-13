#pragma once

#include "ITickingSystem.h"


class DespawnSystem : ITickingSystem {

public:
    ~DespawnSystem(); // _ZN13DespawnSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13DespawnSystem4tickER14EntityRegistry
    DespawnSystem(); // _ZN13DespawnSystemC2Ev
};
