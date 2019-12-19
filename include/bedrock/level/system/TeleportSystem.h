#pragma once

class TeleportSystem : ITickingSystem {

public:
    virtual TeleportSystem::~TeleportSystem();
    virtual void tick(EntityRegistry &);

    TeleportSystem(void);
};
