#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TradeableSystem : ITickingSystem {

public:
    virtual ~TradeableSystem();
    virtual void tick(EntityRegistry &);

    TradeableSystem();
};
