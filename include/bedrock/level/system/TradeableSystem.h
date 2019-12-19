#pragma once

class TradeableSystem : ITickingSystem {

public:
    virtual TradeableSystem::~TradeableSystem();
    virtual void tick(EntityRegistry &);

    TradeableSystem(void);
};
