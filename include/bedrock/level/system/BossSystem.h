#pragma once

#include "ITickingSystem.h"


class BossSystem : ITickingSystem {

public:
    ~BossSystem(); // _ZN10BossSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN10BossSystem4tickER14EntityRegistry
    BossSystem(); // _ZN10BossSystemC2Ev
};
