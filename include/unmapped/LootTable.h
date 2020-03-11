#pragma once

#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/container/Container.h"
#include <vector>
#include <string>


class LootTable {

public:

    ~LootTable();
    LootTable(std::string);
    std::string getDir()const;
    void shuffleAndSplitItems(std::vector<ItemStack, std::allocator<ItemStack>> &, int, Random &);
    void getAvailableSlots(Container &, Random &);
    void getRandomItems(Random &, LootTableContext &)const;
    void fill(Container &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootTable();
};
