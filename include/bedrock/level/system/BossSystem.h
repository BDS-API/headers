#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BossSystem : ITickingSystem {

public:
    ~BossSystem();
    virtual void tick(EntityRegistry &);
    BossSystem();
};
