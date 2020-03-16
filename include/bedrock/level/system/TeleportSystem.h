#pragma once

#include "ITickingSystem.h"


class TeleportSystem : public ITickingSystem {

public:
    virtual ~TeleportSystem(); // _ZN14TeleportSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN14TeleportSystem4tickER14EntityRegistry
    TeleportSystem(); // _ZN14TeleportSystemC2Ev
};
