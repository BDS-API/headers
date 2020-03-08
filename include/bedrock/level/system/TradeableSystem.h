#pragma once

#include "../../../unmapped/EntityRegistry"


class TradeableSystem : ITickingSystem {

public:
    TradeableSystem::~TradeableSystem()
    virtual void tick(EntityRegistry &);

    TradeableSystem(void);
};
