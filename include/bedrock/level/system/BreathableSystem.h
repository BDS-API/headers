#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreathableSystem : ITickingSystem {

public:
    virtual ~BreathableSystem();
    virtual void tick(EntityRegistry &);

    BreathableSystem();
};
