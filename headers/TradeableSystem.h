#pragma once

class TradeableSystem : ITickingSystem {

public:
    virtual ~TradeableSystem();
    virtual void tick(EntityRegistry &);

    void TradeableSystem(void);
};
