#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/pack/ResourcePackManager"


class TradeTables {

public:

    TradeTables(void);
    void reload(Level &);
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::string const&);
};
