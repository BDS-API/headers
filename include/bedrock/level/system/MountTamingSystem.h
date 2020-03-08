#pragma once

#include "../../../unmapped/EntityRegistry"


class MountTamingSystem : ITickingSystem {

public:
    virtual MountTamingSystem::~MountTamingSystem()
    virtual void tick(EntityRegistry &);

    MountTamingSystem(void);
};
