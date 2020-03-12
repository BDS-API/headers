#pragma once

#include <string>
#include <vector>
#include "../json/Value.h"


class LootTable {

public:
    std::string getDir()const;
    void shuffleAndSplitItems(std::vector<ItemStack> &, int, Random &);
    void deserialize(Json::Value);
    void getRandomItems(Random &, LootTableContext &)const;
    LootTable(std::string);
    void fill(Container &, Random &, LootTableContext &);
    ~LootTable();
    void getAvailableSlots(Container &, Random &);
    LootTable();
};
