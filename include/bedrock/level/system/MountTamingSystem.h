#pragma once

class MountTamingSystem : ITickingSystem {

public:
    virtual MountTamingSystem::~MountTamingSystem();
    virtual void tick(EntityRegistry &);

    MountTamingSystem(void);
};
