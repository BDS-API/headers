#pragma once

#include "ITickingSystem.h"


class TeleportSystem : ITickingSystem {

public:
    ~TeleportSystem();
    virtual void tick(EntityRegistry &);
    TeleportSystem();
};
