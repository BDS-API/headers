#pragma once

class TeleportSystem : ITickingSystem {

public:
    virtual ~TeleportSystem();
    virtual void tick(EntityRegistry &);

    void TeleportSystem(void);
};
