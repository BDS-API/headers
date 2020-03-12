#pragma once

#include <string>


class TradeTables {

public:
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void reload(Level &);
    ~TradeTables();
    TradeTables();
    void fetchTable(std::string const&);
};
