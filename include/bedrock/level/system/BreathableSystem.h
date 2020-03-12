#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreathableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BreathableSystem();
    BreathableSystem();
};
