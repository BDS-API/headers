#pragma once

#include "ITickingSystem.h"


class TradeableSystem : ITickingSystem {

public:
    ~TradeableSystem(); // _ZN15TradeableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15TradeableSystem4tickER14EntityRegistry
    TradeableSystem(); // _ZN15TradeableSystemC2Ev
};
