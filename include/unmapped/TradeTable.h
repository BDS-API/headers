#pragma once



class TradeTable {

public:
    ~TradeTable();
    void getTradeTierFromExp(unsigned int);
    TradeTable(Core::Path const&);
    void getExpRequiredForTier(int);
};
