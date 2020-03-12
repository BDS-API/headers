#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class LeashableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~LeashableSystem();
    LeashableSystem();
};
