#pragma once

#include "../core/Path"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/level/Level"


class TradeTables {

public:

    TradeTables(void);
    void reload(Level &);
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::string const&);
};
