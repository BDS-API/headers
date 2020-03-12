#pragma once

#include "../core/Path.h"


class TradeTable {

public:
    ~TradeTable();
    TradeTable(Core::Path const&);
    void getExpRequiredForTier(int);
    void getTradeTierFromExp(unsigned int);
};
