#pragma once

#include "../../../unmapped/EntityRegistry"


class ProjectileSystem : ITickingSystem {

public:
    virtual ProjectileSystem::~ProjectileSystem()
    virtual void tick(EntityRegistry &);

    ProjectileSystem(void);
};
