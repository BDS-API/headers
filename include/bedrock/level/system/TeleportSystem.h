#pragma once

#include "../../../unmapped/EntityRegistry"


class TeleportSystem : ITickingSystem {

public:
    virtual TeleportSystem::~TeleportSystem()
    virtual void tick(EntityRegistry &);

    TeleportSystem(void);
};
