#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BribeableSystem : ITickingSystem {

public:
    ~BribeableSystem();
    virtual void tick(EntityRegistry &);
    BribeableSystem();
};
