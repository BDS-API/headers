#pragma once

#include "ITickingSystem.h"


class BribeableSystem : ITickingSystem {

public:
    ~BribeableSystem();
    virtual void tick(EntityRegistry &);
    BribeableSystem();
};
