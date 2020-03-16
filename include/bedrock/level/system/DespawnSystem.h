#pragma once

#include "ITickingSystem.h"


class DespawnSystem : public ITickingSystem {

public:
    virtual ~DespawnSystem(); // _ZN13DespawnSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN13DespawnSystem4tickER14EntityRegistry
    DespawnSystem(); // _ZN13DespawnSystemC2Ev
};
