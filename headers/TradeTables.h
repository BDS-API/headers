#pragma once

class TradeTables {

public:

    void TradeTables(void);
    void reload(Level &);
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::string const&);
};
