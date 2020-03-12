#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class MountTamingSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~MountTamingSystem();
    MountTamingSystem();
};
