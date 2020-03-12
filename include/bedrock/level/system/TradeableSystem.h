#pragma once

#include "ITickingSystem.h"


class TradeableSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~TradeableSystem();
    TradeableSystem();
};
