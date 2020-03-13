#pragma once

#include <string>


class TradeTables {

public:
    TradeTables(); // _ZN11TradeTablesC2Ev
    ~TradeTables(); // _ZN11TradeTablesD2Ev
    void reload(Level &); // _ZN11TradeTables6reloadER5Level
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&); // _ZN11TradeTables24_parseAndStoreTradeTableEP19ResourcePackManagerRKN4Core4PathE
    void fetchTable(std::string const&); // _ZN11TradeTables10fetchTableERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
