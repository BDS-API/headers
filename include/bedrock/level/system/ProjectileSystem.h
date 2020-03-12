#pragma once

#include "ITickingSystem.h"


class ProjectileSystem : ITickingSystem {

public:
    ~ProjectileSystem();
    virtual void tick(EntityRegistry &);
    ProjectileSystem();
};
