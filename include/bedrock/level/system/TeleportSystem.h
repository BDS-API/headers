#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TeleportSystem : ITickingSystem {

public:
    ~TeleportSystem();
    virtual void tick(EntityRegistry &);
    TeleportSystem();
};
