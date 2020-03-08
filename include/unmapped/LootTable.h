#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/container/Container"
#include "../json/Value"
#include "../bedrock/util/Random"


class LootTable {

public:

    LootTable(std::string);
    void shuffleAndSplitItems(std::vector<ItemStack, std::allocator<ItemStack>> &, int, Random &);
    void getAvailableSlots(Container &, Random &);
    void getRandomItems(Random &, LootTableContext &)const;
    void fill(Container &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootTable(void);
};
