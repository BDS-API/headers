#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class SensingSystem : ITickingSystem {

public:
    virtual ~SensingSystem();
    virtual void tick(EntityRegistry &);

    SensingSystem();
};
