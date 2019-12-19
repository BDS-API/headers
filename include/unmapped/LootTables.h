#pragma once

class LootTables {

public:

    LootTables(void);
    void lookupByName(std::string const&, ResourcePackManager &);
};
