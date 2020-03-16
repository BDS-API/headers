#pragma once

#include "ITickingSystem.h"


class BossSystem : public ITickingSystem {

public:
    virtual ~BossSystem(); // _ZN10BossSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN10BossSystem4tickER14EntityRegistry
    BossSystem(); // _ZN10BossSystemC2Ev
};
