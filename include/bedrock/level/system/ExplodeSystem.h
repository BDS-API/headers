#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ExplodeSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~ExplodeSystem();
    ExplodeSystem();
};
