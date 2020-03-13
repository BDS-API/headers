#pragma once

#include "ITickingSystem.h"


class TeleportSystem : ITickingSystem {

public:
    ~TeleportSystem(); // _ZN14TeleportSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14TeleportSystem4tickER14EntityRegistry
    TeleportSystem(); // _ZN14TeleportSystemC2Ev
};
