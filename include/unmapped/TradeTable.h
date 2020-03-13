#pragma once



class TradeTable {

public:
    ~TradeTable(); // _ZN10TradeTableD2Ev
    void getTradeTierFromExp(unsigned int); // _ZN10TradeTable19getTradeTierFromExpEj
    void getExpRequiredForTier(int); // _ZN10TradeTable21getExpRequiredForTierEi
    TradeTable(Core::Path const&); // _ZN10TradeTableC2ERKN4Core4PathE
};
