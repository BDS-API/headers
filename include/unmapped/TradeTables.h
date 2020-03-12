#pragma once

#include "../bedrock/pack/ResourcePackManager.h"
#include "../core/Path.h"
#include "../bedrock/level/Level.h"
#include <string>


class TradeTables {

public:
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::string const&);
    void reload(Level &);
    TradeTables();
    ~TradeTables();
};
