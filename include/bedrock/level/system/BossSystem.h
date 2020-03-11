#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BossSystem : ITickingSystem {

public:
    virtual ~BossSystem();
    virtual void tick(EntityRegistry &);

    BossSystem();
};
