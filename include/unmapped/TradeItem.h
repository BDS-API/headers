#pragma once

#include "./TradeItem.h"


class TradeItem {

public:

    ~TradeItem();
    TradeItem();
    TradeItem(TradeItem &&);
};
