#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ProjectileSystem : ITickingSystem {

public:
    virtual ~ProjectileSystem();
    virtual void tick(EntityRegistry &);

    ProjectileSystem();
};
