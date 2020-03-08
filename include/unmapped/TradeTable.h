#pragma once

#include "../core/Path"


class TradeTable {

public:

    void getTradeTierFromExp(unsigned int);
    void getExpRequiredForTier(int);
    TradeTable(Core::Path const&);
};
