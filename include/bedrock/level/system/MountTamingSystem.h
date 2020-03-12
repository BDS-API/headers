#pragma once

#include "ITickingSystem.h"


class MountTamingSystem : ITickingSystem {

public:
    ~MountTamingSystem();
    virtual void tick(EntityRegistry &);
    MountTamingSystem();
};
