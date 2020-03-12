#pragma once

#include "ITickingSystem.h"


class BossSystem : ITickingSystem {

public:
    ~BossSystem();
    virtual void tick(EntityRegistry &);
    BossSystem();
};
