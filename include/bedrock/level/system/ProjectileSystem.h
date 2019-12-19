#pragma once

class ProjectileSystem : ITickingSystem {

public:
    virtual ProjectileSystem::~ProjectileSystem();
    virtual void tick(EntityRegistry &);

    ProjectileSystem(void);
};
