#pragma once

#include "../../../unmapped/EntityRegistry"


class MountTamingSystem : ITickingSystem {

public:
    MountTamingSystem::~MountTamingSystem()
    virtual void tick(EntityRegistry &);

    MountTamingSystem(void);
};
