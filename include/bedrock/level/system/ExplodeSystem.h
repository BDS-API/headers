#pragma once

#include "ITickingSystem.h"


class ExplodeSystem : ITickingSystem {

public:
    ~ExplodeSystem();
    virtual void tick(EntityRegistry &);
    ExplodeSystem();
};
