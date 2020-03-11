#pragma once

#include "../core/Path.h"


class TradeTable {

public:

    ~TradeTable();
    void getTradeTierFromExp(unsigned int);
    void getExpRequiredForTier(int);
    TradeTable(Core::Path const&);
};
