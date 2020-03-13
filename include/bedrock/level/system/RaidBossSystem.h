#pragma once

#include "ITickingSystem.h"


class RaidBossSystem : ITickingSystem {

public:
    ~RaidBossSystem(); // _ZN14RaidBossSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14RaidBossSystem4tickER14EntityRegistry
    RaidBossSystem(); // _ZN14RaidBossSystemC2Ev
};
