#pragma once

#include "ITickingSystem.h"


class LeashableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~LeashableSystem();
    LeashableSystem();
};
