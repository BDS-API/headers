#pragma once

#include <string>


class LootTables {

public:
    LootTables();
    ~LootTables();
    void lookupByName(std::string const&, ResourcePackManager &);
};
