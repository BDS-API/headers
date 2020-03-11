#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TeleportSystem : ITickingSystem {

public:
    virtual ~TeleportSystem();
    virtual void tick(EntityRegistry &);

    TeleportSystem();
};
