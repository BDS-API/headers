#pragma once

class ProjectileSystem : ITickingSystem {

public:
    virtual ~ProjectileSystem();
    virtual void tick(EntityRegistry &);

    void ProjectileSystem(void);
};
