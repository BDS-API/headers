#pragma once

#include "../bedrock/pack/ResourcePackManager"


class LootTables {

public:

    LootTables(void);
    void lookupByName(std::string const&, ResourcePackManager &);
};
