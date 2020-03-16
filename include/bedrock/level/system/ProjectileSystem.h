#pragma once

#include "ITickingSystem.h"


class ProjectileSystem : public ITickingSystem {

public:
    virtual ~ProjectileSystem(); // _ZN16ProjectileSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16ProjectileSystem4tickER14EntityRegistry
    ProjectileSystem(); // _ZN16ProjectileSystemC2Ev
};
