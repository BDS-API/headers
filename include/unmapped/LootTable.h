#pragma once

#include <string>
#include "../json/Value.h"
#include "../bedrock/container/Container.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootTable {

public:
    std::string getDir()const;
    void deserialize(Json::Value);
    ~LootTable();
    LootTable();
    void getAvailableSlots(Container &, Random &);
    LootTable(std::string);
    void getRandomItems(Random &, LootTableContext &)const;
    void shuffleAndSplitItems(std::vector<ItemStack> &, int, Random &);
    void fill(Container &, Random &, LootTableContext &);
};
