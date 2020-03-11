#pragma once

#include "../core/Path.h"
#include <string>
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/level/Level.h"


class TradeTables {

public:

    TradeTables();
    ~TradeTables();
    void reload(Level &);
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::string const&);
};
