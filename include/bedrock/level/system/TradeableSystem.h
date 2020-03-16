#pragma once

#include "ITickingSystem.h"


class TradeableSystem : public ITickingSystem {

public:
    virtual ~TradeableSystem(); // _ZN15TradeableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN15TradeableSystem4tickER14EntityRegistry
    TradeableSystem(); // _ZN15TradeableSystemC2Ev
};
