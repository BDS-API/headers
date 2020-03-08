#pragma once

#include "../../../unmapped/EntityRegistry"


class ProjectileSystem : ITickingSystem {

public:
    ProjectileSystem::~ProjectileSystem()
    virtual void tick(EntityRegistry &);

    ProjectileSystem(void);
};
