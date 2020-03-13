#pragma once

#include "ITickingSystem.h"


class ProjectileSystem : ITickingSystem {

public:
    ~ProjectileSystem(); // _ZN16ProjectileSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16ProjectileSystem4tickER14EntityRegistry
    ProjectileSystem(); // _ZN16ProjectileSystemC2Ev
};
