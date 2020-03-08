#pragma once

#include "../../../unmapped/EntityRegistry"


class TradeableSystem : ITickingSystem {

public:
    virtual TradeableSystem::~TradeableSystem()
    virtual void tick(EntityRegistry &);

    TradeableSystem(void);
};
