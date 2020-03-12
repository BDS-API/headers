#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AgeableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~AgeableSystem();
    AgeableSystem();
};
