#pragma once

#include "../bedrock/pack/ResourcePackManager.h"
#include <string>


class LootTables {

public:

    LootTables();
    ~LootTables();
    void lookupByName(std::string const&, ResourcePackManager &);
};
