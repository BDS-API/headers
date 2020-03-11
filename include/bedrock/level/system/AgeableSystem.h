#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AgeableSystem : ITickingSystem {

public:
    virtual ~AgeableSystem();
    virtual void tick(EntityRegistry &);

    AgeableSystem();
};
