#pragma once

#include "ITickingSystem.h"


class RaidBossSystem : public ITickingSystem {

public:
    virtual ~RaidBossSystem(); // _ZN14RaidBossSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN14RaidBossSystem4tickER14EntityRegistry
    RaidBossSystem(); // _ZN14RaidBossSystemC2Ev
};
