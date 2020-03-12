#pragma once

#include "ITickingSystem.h"


class BreathableSystem : ITickingSystem {

public:
    ~BreathableSystem();
    virtual void tick(EntityRegistry &);
    BreathableSystem();
};
